
@interface NFTapToRadar : NSObject {
    Class  _lsApplicationWorkspace;
    NSString * _pendingRequest;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runLoopSource;
    NSUserDefaults * _userDefaults;
    struct __CFUserNotification { } * _userNotification;
}

+ (id)_getInstance;
+ (void)handleCallback:(unsigned long long)arg1;
+ (void)requestTapToRadar:(id)arg1 preferences:(id)arg2;

- (void).cxx_destruct;
- (void)_handleCallbackSync:(unsigned long long)arg1;
- (void)_requestTapToRadarSync:(id)arg1 prefs:(id)arg2;
- (id)init;

@end
