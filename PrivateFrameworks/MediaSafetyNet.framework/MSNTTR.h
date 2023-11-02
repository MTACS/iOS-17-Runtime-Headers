
@interface MSNTTR : NSObject {
    bool  _pendedTTR;
    struct __CFRunLoopSource { } * _runLoopSource;
    NSURL * _url;
    struct __CFUserNotification { } * _userNotification;
}

@property (readonly) bool TTRInProgress;
@property bool pendedTTR;
@property (retain) NSURL *url;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)TTRInProgress;
- (void)beginTTRWithTitle:(id)arg1;
- (void)beginTTRWithTitle:(id)arg1 date:(id)arg2;
- (void)completeTTR:(id)arg1;
- (void)continueTTR;
- (void)handleCallback:(unsigned long long)arg1;
- (bool)pendedTTR;
- (void)setPendedTTR:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
