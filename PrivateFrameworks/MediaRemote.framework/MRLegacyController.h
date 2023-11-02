
@interface MRLegacyController : NSObject <MRProtocolClientConnectionDelegate> {
    <MRLegacyControllerDelegate> * _delegate;
    MRExternalDevice * _externalDevice;
    NSString * _outputDeviceUID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRLegacyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MRExternalDevice *externalDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *outputDeviceUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addOutputDeviceIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)connect;
- (void)dealloc;
- (id)delegate;
- (id)externalDevice;
- (void)getMasterVolumeCapabilitiesWithCompletion:(id /* block */)arg1;
- (void)getMasterVolumeWithCompletion:(id /* block */)arg1;
- (void)getOutputDeviceVolume:(id)arg1 completion:(id /* block */)arg2;
- (void)getOutputDeviceVolumeCapabilities:(id)arg1 completion:(id /* block */)arg2;
- (void)handleVolumeCapabilitiesDidChangeNotification:(id)arg1;
- (id)initWithAVOutputDevice:(id)arg1;
- (id)initWithExternalDevice:(id)arg1 outputDeviceUID:(id)arg2;
- (id)initWithOutputDevice:(id)arg1;
- (id)initWithOutputDeviceUID:(id)arg1;
- (void)modifyTopologyAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 completion:(id /* block */)arg4;
- (id)outputDeviceUID;
- (id)queue;
- (void)removeOutputDeviceIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setExternalDevice:(id)arg1;
- (void)setMasterVolume:(float)arg1 completion:(id /* block */)arg2;
- (void)setOutputDeviceIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)setOutputDeviceUID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setVolume:(float)arg1 forOutputDeviceID:(id)arg2 completion:(id /* block */)arg3;
- (void)setupExternalDevice;
- (void)tearDown;

@end
