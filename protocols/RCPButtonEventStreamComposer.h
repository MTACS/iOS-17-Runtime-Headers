
@protocol RCPButtonEventStreamComposer <RCPBaseEventStreamComposer>

@required

- (void)beginButtonPressForButtonType:(long long)arg1;
- (void)beginButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)endButtonPressForButtonType:(long long)arg1;
- (void)endButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)flipRingerSwitchToValue:(bool)arg1;
- (void)knobNudge:(struct CGVector { double x1; double x2; })arg1 buttonMask:(unsigned int)arg2 duration:(double)arg3;
- (void)pressButtons:(NSArray *)arg1 duration:(double)arg2;
- (void)pressButtonsWithPages:(NSArray *)arg1 usages:(NSArray *)arg2 duration:(double)arg3;
- (void)sendUnicodeString:(NSString *)arg1;
- (void)sendUnicodeString:(NSString *)arg1 synthesizePerCharacterEvents:(bool)arg2 durationBetweenEvents:(double)arg3;
- (void)sendUnicodeStringByCharacters:(NSArray *)arg1 durationBetweenEvents:(double)arg2;

@end
