
@interface TISKPredictionBarEvent : TISKTimestampEvent {
    NSString * _emojiBucketCategory;
    bool  _emojiPrediction;
}

@property (nonatomic, retain) NSString *emojiBucketCategory;
@property (nonatomic) bool emojiPrediction;

- (void).cxx_destruct;
- (id)description;
- (id)emojiBucketCategory;
- (bool)emojiPrediction;
- (id)init:(double)arg1 emojiPrediction:(bool)arg2 emojiSearchMode:(bool)arg3 order:(long long)arg4 emojiBucketCategory:(id)arg5;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (void)setEmojiBucketCategory:(id)arg1;
- (void)setEmojiPrediction:(bool)arg1;

@end
