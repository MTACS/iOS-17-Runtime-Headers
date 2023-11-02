
@protocol TSDKernelClockClient <NSObject>

@optional

- (void)didBeginClockGrandmasterChangeForClock:(TSDKernelClock *)arg1;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSDKernelClock *)arg3;
- (void)didChangeClockMasterForClock:(TSDKernelClock *)arg1;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSDKernelClock *)arg3;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSDKernelClock *)arg2;
- (void)didEndClockGrandmasterChangeForClock:(TSDKernelClock *)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSDKernelClock *)arg3;
- (void)didProcessSync:(TSDKernelClock *)arg1;
- (void)didResetClock:(TSDKernelClock *)arg1;

@end
