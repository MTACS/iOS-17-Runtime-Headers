
@interface TISKDeleteKeyEvent : TISKInputEvent {
    long long  _deletePostion;
}

@property (nonatomic) long long deletePostion;

- (long long)_metricDeleteKeyPostion;
- (long long)deletePostion;
- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;
- (void)setDeletePostion:(long long)arg1;

@end
