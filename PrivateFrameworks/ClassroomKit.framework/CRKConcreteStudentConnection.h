
@interface CRKConcreteStudentConnection : NSObject <CRKStudentConnection, CRKStudentDaemonProxyObserver> {
    id /* block */  _invalidationHandler;
    NSHashTable * _notificationObservations;
    CRKStudentDaemonProxy * _studentDaemonProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, readonly) NSHashTable *notificationObservations;
@property (nonatomic, readonly) CRKStudentDaemonProxy *studentDaemonProxy;
@property (readonly) Class superclass;

+ (id)connectionWithStudentDaemonProxy:(id)arg1 invalidationHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)daemonProxy:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)daemonProxyDidDisconnect:(id)arg1;
- (void)dealloc;
- (id)initWithStudentDaemonProxy:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)notificationObservations;
- (id)observeNotificationWithName:(id)arg1 handler:(id /* block */)arg2;
- (id)operationForRequest:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (id)studentDaemonProxy;

@end
