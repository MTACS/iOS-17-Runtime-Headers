
@interface _GCNintendoJoyConDevicePending : NSObject {
    GCFuture * _deviceFuture;
    GCPromise * _devicePromise;
    <_GCDeviceDriverConnection> * _driverConnection;
    <_GCDeviceDriverConnection> * _filterConnection;
    _GCNintendoJoyConDeviceManager * _manager;
    NSObject<OS_dispatch_queue> * _queue;
    _GCHIDServiceInfo * _serviceInfo;
}

@property (readonly) GCFuture *device;
@property (retain) <_GCDeviceDriverConnection> *driverConnection;
@property (retain) <_GCDeviceDriverConnection> *filterConnection;
@property (readonly) _GCNintendoJoyConDeviceManager *manager;
@property (readonly) _GCHIDServiceInfo *serviceInfo;

- (void).cxx_destruct;
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

@end
