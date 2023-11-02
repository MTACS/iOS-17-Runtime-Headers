
@interface TISKEmojiSwitchEvent : TISKTimestampEvent

- (id)description;
- (id)init:(double)arg1 emojiSearchMode:(bool)arg2 order:(long long)arg3;
- (void)reportToSession:(id)arg1;

@end
