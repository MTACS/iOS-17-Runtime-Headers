
@interface PLPowerAssertion : NSObject

+ (void)performNoTimeoutPowerAssertionTaskWithName:(id)arg1 humanReadableReason:(id)arg2 block:(id /* block */)arg3;
+ (void)performPowerAssertionTaskWithName:(id)arg1 humanReadableReason:(id)arg2 timeout:(double)arg3 timeoutAction:(struct __CFString { }*)arg4 block:(id /* block */)arg5;
+ (void)removePowerAssertionForAssertionID:(unsigned int)arg1;
+ (unsigned int)takePowerAssertionWithName:(id)arg1 humanReadableReason:(id)arg2 timeout:(double)arg3 timeoutAction:(struct __CFString { }*)arg4;

@end
