
@interface RPPrivateAdvertiser : NSObject <NSSecureCoding, RPPrivateDiscoveryXPCClientInterface> {
    NSString * _accessGroup;
    bool  _activateCalled;
    bool  _changesPending;
    unsigned int  _clientID;
    bool  _direct;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _errorHandler;
    id /* block */  _interruptionHandler;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSDictionary * _serviceInfo;
    NSString * _serviceType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSXPCConnection * _xpcCnx;
}

@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic) unsigned int clientID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ interruptionHandler;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSDictionary *serviceInfo;
@property (nonatomic, copy) NSString *serviceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_activateDirect;
- (void)_activateXPC:(bool)arg1;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_invalidateDirect;
- (void)_invalidated;
- (void)_update;
- (void)_updateIfNeededWithBlock:(id /* block */)arg1;
- (id)accessGroup;
- (void)activate;
- (unsigned int)clientID;
- (void)dealloc;
- (id)description;
- (id)dispatchQueue;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)errorHandler;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id /* block */)interruptionHandler;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (id)serviceInfo;
- (id)serviceType;
- (void)setAccessGroup:(id)arg1;
- (void)setClientID:(unsigned int)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setServiceInfo:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointChanged:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointFound:(id)arg1;
- (void)xpcPrivateDiscoveryEndpointLost:(id)arg1;

@end
