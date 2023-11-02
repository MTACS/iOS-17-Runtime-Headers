
@interface BKHIDDomainServiceServer : NSObject <BSInvalidatable, BSServiceConnectionListenerDelegate> {
    BSServiceConnectionListener * _connectionListener;
    <BKHIDDomainServiceDelegate> * _delegate;
    NSString * _entitlement;
    BSServiceInterface * _interface;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _invalid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSMutableIntegerMap * _lock_connectionsByPID;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    id  _serviceTarget;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activate;
- (id)connectionForPID:(int)arg1;
- (void)enumerateUserInfoWithBlock:(id /* block */)arg1;
- (id)initWithDelegate:(id)arg1 serverTarget:(id)arg2 serverProtocol:(id)arg3 clientProtocol:(id)arg4 serviceName:(id)arg5 queue:(id)arg6 log:(id)arg7 entitlement:(id)arg8;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)setUserInfo:(id)arg1 forConnection:(id)arg2;
- (id)userInfoForConnection:(id)arg1;

@end
