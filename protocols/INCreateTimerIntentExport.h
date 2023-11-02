
@protocol INCreateTimerIntentExport <NSObject, JSExport>

@required

- (double)duration;
- (id)init;
- (INSpeakableString *)label;
- (void)setDuration:(double)arg1;
- (void)setLabel:(INSpeakableString *)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
