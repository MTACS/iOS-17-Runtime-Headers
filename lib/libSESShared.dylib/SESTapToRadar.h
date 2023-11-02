
@interface SESTapToRadar : NSObject {
    Class  _lsApplicationWorkspace;
    NSString * _pendingRequestClient;
    NSString * _pendingRequestReason;
    NSObject<OS_dispatch_queue> * _queue;
    struct __CFRunLoopSource { } * _runLoopSource;
    NSUserDefaults * _userDefaults;
    struct __CFUserNotification { } * _userNotification;
}

+ (id)getInstance;
+ (void)handleCallback:(unsigned long long)arg1;
+ (void)requestTapToRadar:(id)arg1 client:(id)arg2;

- (void).cxx_destruct;
- (void)_handleCallbackSync:(unsigned long long)arg1;
- (void)_requestTapToRadarSync:(id)arg1 client:(id)arg2;
- (id)init;
- (void)setProhibitUntil:(id)arg1 forClient:(id)arg2;

@end
