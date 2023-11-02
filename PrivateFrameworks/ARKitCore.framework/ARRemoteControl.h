
@interface ARRemoteControl : NSObject <ARRemoteControlProtocol> {
    NSXPCConnection * _connection;
    <ARControlProtocol> * _control;
    ARWeakReference * _exportedObjectWeakReference;
}

@property (nonatomic, readonly) <ARControlProtocol> *control;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ARControlProtocol> *syncControl;

+ (id)controlInterface;
+ (id)controlProxyInterface;

- (void).cxx_destruct;
- (id)control;
- (void)dealloc;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (void)interruptionHandler;
- (void)invalidate;
- (void)invalidationHandler;
- (id)syncControl;

@end
