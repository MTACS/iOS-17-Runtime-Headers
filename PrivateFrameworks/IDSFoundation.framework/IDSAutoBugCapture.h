
@interface IDSAutoBugCapture : NSObject

+ (bool)isSupported;
+ (void)triggerCaptureWithEvent:(long long)arg1 context:(id)arg2 completion:(id /* block */)arg3;
+ (void)triggerCaptureWithEvent:(long long)arg1 destinations:(id)arg2 context:(id)arg3 completion:(id /* block */)arg4;

@end
