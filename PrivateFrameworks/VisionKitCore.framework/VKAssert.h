
@interface VKAssert : NSObject

+ (void)handleFailedAssertWithCondition:(const char *)arg1 functionName:(const char *)arg2 simulateCrash:(bool)arg3 showAlert:(bool)arg4 alertMessage:(id)arg5 format:(id)arg6;
+ (void)handleFailedAssertWithCondition:(const char *)arg1 functionName:(const char *)arg2 simulateCrash:(bool)arg3 showAlert:(bool)arg4 format:(id)arg5;

@end
