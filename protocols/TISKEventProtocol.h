
@protocol TISKEventProtocol

@required

- (NSString *)description;
- (TIKeyboardTouchEvent *)downTouchEvent;
- (NSString *)privateDescription;
- (void)reportInterKeyTiming:(TISKSessionStats *)arg1 previousEvent:(TISKEvent *)arg2;
- (void)reportToSession:(TISKSessionStats *)arg1;
- (double)touchDownTimestamp;
- (double)touchUpTimestamp;
- (TIKeyboardTouchEvent *)upTouchEvent;

@end
