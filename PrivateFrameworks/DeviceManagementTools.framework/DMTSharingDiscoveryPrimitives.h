
@interface DMTSharingDiscoveryPrimitives : NSObject <CATSharingDiscoveryPrimitives> {
    bool  _activated;
    SFDeviceDiscovery * _deviceDiscovery;
    id /* block */  _deviceFoundHandler;
    id /* block */  _deviceLostHandler;
    NSObject<OS_dispatch_queue> * _discoveryCallbackQueue;
    NSMutableDictionary * _foundDevicesByIdentifier;
    bool  _invalidated;
    id /* block */  _invalidationHandler;
}

@property (getter=isActivated, nonatomic) bool activated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SFDeviceDiscovery *deviceDiscovery;
@property (nonatomic, copy) id /* block */ deviceFoundHandler;
@property (nonatomic, copy) id /* block */ deviceLostHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *discoveryCallbackQueue;
@property (nonatomic, retain) NSMutableDictionary *foundDevicesByIdentifier;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)arg1;
- (void)addDependencyHandlers;
- (void)deactivate;
- (id)deviceDiscovery;
- (id /* block */)deviceFoundHandler;
- (id /* block */)deviceLostHandler;
- (id)discoveryCallbackQueue;
- (id)foundDevicesByIdentifier;
- (void)handleDevice:(id)arg1;
- (id)init;
- (id /* block */)invalidationHandler;
- (bool)isActivated;
- (bool)isInvalidated;
- (id)sessionForDevice:(id)arg1;
- (void)setActivated:(bool)arg1;
- (void)setDeviceFoundHandler:(id /* block */)arg1;
- (void)setDeviceLostHandler:(id /* block */)arg1;
- (void)setFoundDevicesByIdentifier:(id)arg1;
- (void)setInvalidated:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;

@end
