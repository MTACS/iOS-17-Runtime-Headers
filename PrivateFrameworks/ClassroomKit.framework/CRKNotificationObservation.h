
@interface CRKNotificationObservation : NSObject <CRKObservation> {
    NSNotificationCenter * _notificationCenter;
    id /* block */  _notificationHandler;
    NSString * _notificationName;
    NSObject * _object;
}

@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, copy) id /* block */ notificationHandler;
@property (nonatomic, readonly, copy) NSString *notificationName;
@property (nonatomic, retain) NSObject *object;

+ (id)observationWithNotificationCenter:(id)arg1 notificationName:(id)arg2 object:(id)arg3 notificationHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)beginObserving;
- (void)dealloc;
- (void)endObserving;
- (id)initWithNotificationCenter:(id)arg1 notificationName:(id)arg2 object:(id)arg3 notificationHandler:(id /* block */)arg4;
- (void)invalidate;
- (id)notificationCenter;
- (void)notificationDidFire:(id)arg1;
- (id /* block */)notificationHandler;
- (id)notificationName;
- (id)object;
- (void)setNotificationHandler:(id /* block */)arg1;
- (void)setObject:(id)arg1;

@end
