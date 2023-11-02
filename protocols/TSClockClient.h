
@protocol TSClockClient <NSObject>

@optional

- (void)didBeginClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didChangeClockMasterForClock:(TSClock *)arg1;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSClock *)arg2;
- (void)didEndClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)arg1 localPort:(unsigned short)arg2 forClock:(TSClock *)arg3;
- (void)didProcessSync:(TSClock *)arg1;
- (void)didResetClock:(TSClock *)arg1;

@end
