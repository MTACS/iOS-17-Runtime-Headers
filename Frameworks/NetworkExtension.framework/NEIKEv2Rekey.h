
@interface NEIKEv2Rekey : NSObject <NSObject> {
    SWWakingTimer * _childLifetime;
    NSObject<OS_dispatch_source> * _childLifetimeDispatchTimer;
    int  _childLifetimeMinutes;
    id /* block */  _childRekeyHandler;
    SWWakingTimer * _ikeLifetime;
    NSObject<OS_dispatch_source> * _ikeLifetimeDispatchTimer;
    int  _ikeLifetimeMinutes;
    id /* block */  _ikeRekeyHandler;
    NSString * _sessionDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;

@end
