
@protocol HFPinCodeManagerObserver <NSObject>

@optional

- (void)pinCodeManagerDidUpdate:(HFPinCodeManager *)arg1 pinCodes:(NSSet *)arg2;
- (void)pinCodeManagerFetchDidComplete:(HFPinCodeManager *)arg1;

@end
