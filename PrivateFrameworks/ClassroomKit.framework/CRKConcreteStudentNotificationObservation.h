
@interface CRKConcreteStudentNotificationObservation : NSObject <CRKObservation> {
    id /* block */  _notificationHandler;
    NSString * _notificationName;
}

@property (nonatomic, copy) id /* block */ notificationHandler;
@property (nonatomic, readonly, copy) NSString *notificationName;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 notificationHandler:(id /* block */)arg2;
- (void)invalidate;
- (id /* block */)notificationHandler;
- (id)notificationName;
- (void)receiveNotificationWithName:(id)arg1 userInfo:(id)arg2;
- (void)setNotificationHandler:(id /* block */)arg1;

@end
