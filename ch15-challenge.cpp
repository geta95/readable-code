// 直近1分間及び1時間の累積カウントを記録する
// 例えば、帯域幅の使用状況を確認するのに使える

class MinuteHourCounter {
    public:
        // 新しいデータ点を追加する（count >= 0）
        // それから1分間は、MinuteCount()の返す値が+countだけ増える
        // それから1時間は、HourCount()の返す値が+countだけ増える
        void Add(int count);

        // 直近60秒間の累積カウントを返す
        int MinuteCount();

        // 直近3,600秒間の累積カウントを返す
        int HourCount();
};
