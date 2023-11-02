
@interface CUUserNotificationCustomAction : NSObject {
    UNNotificationAction * _action;
    id /* block */  _handler;
}

@property (nonatomic, retain) UNNotificationAction *action;
@property (nonatomic, copy) id /* block */ handler;

- (void).cxx_destruct;
- (id)action;
- (id /* block */)handler;
- (void)setAction:(id)arg1;
- (void)setHandler:(id /* block */)arg1;

@end
