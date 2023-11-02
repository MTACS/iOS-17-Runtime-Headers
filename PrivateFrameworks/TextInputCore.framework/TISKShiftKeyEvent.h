
@interface TISKShiftKeyEvent : TISKEvent

- (id)description;
- (id)init:(id)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (void)reportInterKeyTiming:(id)arg1 previousEvent:(id)arg2;
- (void)reportToSession:(id)arg1;

@end
