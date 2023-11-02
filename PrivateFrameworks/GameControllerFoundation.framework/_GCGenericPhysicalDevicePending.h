
@interface _GCGenericPhysicalDevicePending : NSObject <GCGenericDeviceDriverConfigurationServiceClientInterface> {
    GCFuture * _deviceFuture;
    GCPromise * _devicePromise;
    <_GCDeviceDriverConnection> * _driverConnection;
    <_GCDeviceDriverConnection> * _filterConnection;
    _GCGenericDeviceManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
    _GCHIDServiceInfo * _serviceInfo;
}

@property (readonly) GCFuture *device;
@property (retain) <_GCDeviceDriverConnection> *driverConnection;
@property (retain) <_GCDeviceDriverConnection> *filterConnection;
@property (readonly) _GCGenericDeviceManager *manager;
@property (readonly) _GCHIDServiceInfo *serviceInfo;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

- (void).cxx_destruct;
- (id)_onqueue_createDeviceWithModel:(id)arg1 service:(id)arg2;
- (void)dealloc;
- (id)device;
- (id)driverConnection;
- (id)filterConnection;
- (id)init;
- (id)initWithHIDService:(id)arg1 manager:(id)arg2;
- (id)manager;
- (id)serviceInfo;
- (void)setDriverConnection:(id)arg1;
- (void)setDriverConnection:(id)arg1 invalidatingPrevious:(bool)arg2;
- (void)setFilterConnection:(id)arg1;
- (void)setFilterConnection:(id)arg1 invalidatingPrevious:(bool)arg2;

// Image: /System/Library/Frameworks/GameController.framework/GameController

- (id)_onqueue_createDeviceWithModel:(id)arg1 service:(id)arg2;

@end
