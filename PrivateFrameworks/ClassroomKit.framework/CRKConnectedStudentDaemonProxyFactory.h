
@interface CRKConnectedStudentDaemonProxyFactory : NSObject <CRKStudentDaemonProxyObserver> {
    id /* block */  _didConnectHandler;
    CRKConnectedStudentDaemonProxyFactory * _selfReference;
    CRKStudentDaemonProxy * _studentDaemonProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didConnectHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CRKConnectedStudentDaemonProxyFactory *selfReference;
@property (nonatomic, readonly) CRKStudentDaemonProxy *studentDaemonProxy;
@property (readonly) Class superclass;

+ (void)makeConnectedStudentDaemonProxyWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)beginConnection;
- (void)daemonProxyDidConnect:(id)arg1;
- (id /* block */)didConnectHandler;
- (id)initWithStudentDaemonProxy:(id)arg1 didConnectHandler:(id /* block */)arg2;
- (id)selfReference;
- (void)setDidConnectHandler:(id /* block */)arg1;
- (void)setSelfReference:(id)arg1;
- (id)studentDaemonProxy;

@end
