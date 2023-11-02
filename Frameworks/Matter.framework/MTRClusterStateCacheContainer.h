
@interface MTRClusterStateCacheContainer : NSObject {
    MTRBaseDevice * _baseDevice;
    void * _cppClusterStateCache;
    NSNumber * _deviceID;
    bool  _shouldUseXPC;
    MTRDeviceControllerXPCConnection * _xpcConnection;
    <NSCopying> * _xpcControllerID;
}

@property (nonatomic, retain) MTRBaseDevice *baseDevice;
@property void*cppClusterStateCache;
@property (nonatomic, copy) NSNumber *deviceID;
@property bool shouldUseXPC;
@property (nonatomic) MTRDeviceControllerXPCConnection *xpcConnection;
@property (nonatomic, retain) <NSCopying> *xpcControllerID;

- (void).cxx_destruct;
- (id)baseDevice;
- (void*)cppClusterStateCache;
- (id)deviceID;
- (id)init;
- (void)readAttributesWithEndpointID:(id)arg1 clusterID:(id)arg2 attributeID:(id)arg3 queue:(id)arg4 completion:(id /* block */)arg5;
- (void)setBaseDevice:(id)arg1;
- (void)setCppClusterStateCache:(void*)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setShouldUseXPC:(bool)arg1;
- (void)setXPCConnection:(id)arg1 controllerID:(id)arg2 deviceID:(id)arg3;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcControllerID:(id)arg1;
- (bool)shouldUseXPC;
- (id)xpcConnection;
- (id)xpcControllerID;

@end
