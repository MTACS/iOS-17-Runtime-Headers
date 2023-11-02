
@interface HDSPCFUserNotification : NSObject {
    id /* block */  _actionHandler;
    NSString * _identifier;
    struct __CFUserNotification { } * _notification;
}

@property (nonatomic, readonly, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) struct __CFUserNotification { }*notification;

+ (id)userNotificationWithIdentifier:(id)arg1 notification:(struct __CFUserNotification { }*)arg2 actionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)actionHandler;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 notification:(struct __CFUserNotification { }*)arg2 actionHandler:(id /* block */)arg3;
- (struct __CFUserNotification { }*)notification;

@end
