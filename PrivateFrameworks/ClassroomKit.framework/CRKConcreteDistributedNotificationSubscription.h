
@interface CRKConcreteDistributedNotificationSubscription : NSObject <CRKCancelable> {
    bool  _active;
    id /* block */  _handler;
    NSString * _name;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (void)cancel;
- (struct __CFNotificationCenter { }*)center;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithNotificationName:(id)arg1 handler:(id /* block */)arg2;
- (bool)isActive;
- (id)name;
- (void)notificationDidFire:(id)arg1;
- (void)resume;
- (void)setActive:(bool)arg1;

@end
