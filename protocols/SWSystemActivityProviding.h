
@protocol SWSystemActivityProviding <NSObject>

@required

- (BSAbsoluteMachTimer *)createTimerWithIdentifier:(NSString *)arg1;
- (SWDeclareSystemActivityResult *)declareSystemActivityWithName:(NSString *)arg1;
- (unsigned long long)getMachContinuousKernelWakeTime;
- (void)releaseAssertionID:(unsigned int)arg1;

@end
