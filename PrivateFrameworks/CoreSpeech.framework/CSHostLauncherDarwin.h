
@interface CSHostLauncherDarwin : NSObject {
    struct __IOHIDUserDevice { } * _device;
    NSObject<OS_dispatch_queue> * _hidCallbackQueue;
}

+ (id)propertyDictForDarwin;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)wakeHostForVoiceTrigger;

@end
