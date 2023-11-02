
@interface GCConfigXPCServiceServiceConnection : NSObject {
    _Atomic bool  _invalid;
    NSArray * _invalidationHandlers;
    GCConfigXPCServiceConnection * _rootConnection;
    id  _rootConnectionInterruptionObserver;
    id  _rootConnectionInvalidationObserver;
    id  _serviceVendor;
}

@property (getter=isInvalid, nonatomic, readonly) bool invalid;

+ (id)connection:(id)arg1 withClient:(id)arg2;
+ (id)serviceProtocol;

- (void).cxx_destruct;
- (id)addInvalidationHandler:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 serviceVendor:(id)arg2;
- (bool)isInvalid;
- (void)scheduleSendBarrierBlock:(id /* block */)arg1;
- (id)serviceVendorRequestWithHandler:(id /* block */)arg1;
- (id)serviceVendorRequestWithLabel:(id)arg1 handler:(id /* block */)arg2;

@end
