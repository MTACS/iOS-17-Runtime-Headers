
@interface URTUserNotificationPresentation : NSObject <URTPresenting> {
    NSDictionary * _contents;
    unsigned long long  _creationFlags;
    int  _error;
    struct __CFUserNotification { } * _userNotification;
}

@property (nonatomic, readonly, copy) NSDictionary *contents;
@property (nonatomic, readonly) unsigned long long creationFlags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)invokeHandlerForUserNotification:(struct __CFUserNotification { }*)arg1 responseFlags:(unsigned long long)arg2;
+ (void)registerUserNotification:(struct __CFUserNotification { }*)arg1 handler:(id /* block */)arg2;
+ (void)unregisterHandlerForUserNotification:(struct __CFUserNotification { }*)arg1;

- (void).cxx_destruct;
- (id)contents;
- (struct __CFRunLoopSource { }*)createRunLoopSourceOrdered:(long long)arg1 handler:(id /* block */)arg2;
- (unsigned long long)creationFlags;
- (void)dismiss;
- (int)error;
- (id)initWithContents:(id)arg1 flags:(unsigned long long)arg2;
- (void)invalidate;
- (void)present;

@end
