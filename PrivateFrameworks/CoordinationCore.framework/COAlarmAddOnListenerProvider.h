
@interface COAlarmAddOnListenerProvider : NSObject <COServiceListenerProvider> {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)serviceListener;
- (bool)serviceShouldAcceptNewConnection:(id)arg1;

@end
