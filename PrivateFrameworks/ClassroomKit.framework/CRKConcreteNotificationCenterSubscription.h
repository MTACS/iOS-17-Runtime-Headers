
@interface CRKConcreteNotificationCenterSubscription : NSObject <CRKCancelable> {
    NSNotificationCenter * _notificationCenter;
    id /* block */  _notificationHandler;
    id  _object;
}

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (copy) id /* block */ notificationHandler;
@property (nonatomic, retain) id object;

+ (id)subscriptionWithNotificationCenter:(id)arg1 notificationName:(id)arg2 object:(id)arg3 notificationHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithNotificationCenter:(id)arg1 object:(id)arg2 notificationHandler:(id /* block */)arg3;
- (id)notificationCenter;
- (void)notificationDidFire:(id)arg1;
- (id /* block */)notificationHandler;
- (id)object;
- (void)setNotificationHandler:(id /* block */)arg1;
- (void)setObject:(id)arg1;

@end
