
@interface _GCDeviceDriverServiceConnection : NSObject {
    <_GCDeviceDriverConnection> * _driverConnection;
    id  _driverConnectionInterruptionObserver;
    id  _driverConnectionInvalidationObserver;
    _Atomic bool  _invalid;
    NSArray * _invalidationHandlers;
    id  _serviceVendor;
}

@property (getter=isInvalid, nonatomic, readonly) bool invalid;

+ (id)connectionToServiceInDriver:(id)arg1 withClient:(id)arg2;
+ (id)serviceProtocol;

- (void).cxx_destruct;
- (id)addInvalidationHandler:(id /* block */)arg1;
- (id)initWithDriverConnection:(id)arg1 serviceVendor:(id)arg2;
- (bool)isInvalid;
- (void)scheduleSendBarrierBlock:(id /* block */)arg1;
- (id)serviceVendorRequestWithHandler:(id /* block */)arg1;
- (id)serviceVendorRequestWithLabel:(id)arg1 handler:(id /* block */)arg2;

@end
