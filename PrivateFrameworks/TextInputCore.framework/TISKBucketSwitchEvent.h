
@interface TISKBucketSwitchEvent : TISKEvent {
    TISKSessionStats * _sessionStats;
}

@property (nonatomic, retain) TISKSessionStats *sessionStats;

- (void).cxx_destruct;
- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (id)privateDescription;
- (void)reportToSession:(id)arg1;
- (id)sessionStats;
- (void)setSessionStats:(id)arg1;

@end
