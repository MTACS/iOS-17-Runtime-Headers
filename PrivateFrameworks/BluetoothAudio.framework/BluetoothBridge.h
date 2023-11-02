
@interface BluetoothBridge : NSObject {
    id /* block */  _activation;
    id /* block */  _activationTimeoutBlock;
    NSObject<OS_dispatch_semaphore> * _connectedSemaphore;
    CBDiscovery * _deviceDiscovery;
    id /* block */  _lowerScanRate;
    struct OpaqueFigEndpointManager { } * _manager;
    bool  _noHFPSupport;
    NSObject<OS_dispatch_queue> * _queue;
    CUSystemMonitor * _systemMonitor;
    bool  _targetUserSession;
}

@property (copy) id /* block */ activation;
@property (copy) id /* block */ activationTimeoutBlock;
@property (retain) NSObject<OS_dispatch_semaphore> *connectedSemaphore;
@property (retain) CBDiscovery *deviceDiscovery;
@property (copy) id /* block */ lowerScanRate;
@property (nonatomic) struct OpaqueFigEndpointManager { }*manager;
@property (nonatomic) bool noHFPSupport;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) CUSystemMonitor *systemMonitor;
@property bool targetUserSession;

+ (id)sharedBluetoothBridge;

- (void).cxx_destruct;
- (id /* block */)activation;
- (id /* block */)activationTimeoutBlock;
- (void)addListeners;
- (id)addressFromDevice:(id)arg1;
- (void)connectToAddress:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)connectedSemaphore;
- (struct __CFDictionary { }*)createDescriptionWithDevice:(id)arg1;
- (id)deviceDiscovery;
- (id)deviceFromIdentifier:(id)arg1;
- (void)getHFPSupportStatus;
- (id)init;
- (bool)isConnected:(id)arg1;
- (bool)isHALPublished:(unsigned char)arg1 device:(id)arg2;
- (id /* block */)lowerScanRate;
- (struct OpaqueFigEndpointManager { }*)manager;
- (id)nameFromDevice:(id)arg1;
- (bool)noHFPSupport;
- (id)queue;
- (void)setActivation:(id /* block */)arg1;
- (void)setActivationTimeoutBlock:(id /* block */)arg1;
- (void)setConnectedSemaphore:(id)arg1;
- (void)setDeviceDiscovery:(id)arg1;
- (void)setLowerScanRate:(id /* block */)arg1;
- (void)setManager:(struct OpaqueFigEndpointManager { }*)arg1;
- (void)setNoHFPSupport:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setSystemMonitor:(id)arg1;
- (void)setTargetUserSession:(bool)arg1;
- (bool)shouldRemoveDevice:(id)arg1;
- (void)startLEScanning:(bool)arg1;
- (void)stopLEScanning;
- (unsigned char)supportedFormats:(id)arg1;
- (id)systemMonitor;
- (bool)targetUserSession;
- (id)uidFromDevice:(id)arg1;

@end
