
@protocol INCreateTimerIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INTimer *)createdTimer;
- (void)setCreatedTimer:(INTimer *)arg1;

@end
