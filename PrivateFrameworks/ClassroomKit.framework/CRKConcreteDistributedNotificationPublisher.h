
@interface CRKConcreteDistributedNotificationPublisher : NSObject <CRKDistributedNotificationPublisher>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)subscribeToNotificationWithName:(id)arg1 handler:(id /* block */)arg2;

@end
