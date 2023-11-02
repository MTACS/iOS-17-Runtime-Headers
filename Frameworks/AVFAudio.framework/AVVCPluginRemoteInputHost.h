
@interface AVVCPluginRemoteInputHost : NSObject <AVAudioRemoteInputPluginDelegate> {
    AVVoiceController * _mMotherController;
    NSMutableArray<AVAudioRemoteInputPlugin> * mPlugins;
}

@property (nonatomic) AVVoiceController *mMotherController;

- (void).cxx_destruct;
- (id)allBundles:(id*)arg1;
- (void)dealloc;
- (id)findDeviceWithIdentifier:(id)arg1;
- (id)findFirstBluetoothDevice;
- (id)init;
- (void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2;
- (void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2;
- (void)invalidatePlugins;
- (id)mMotherController;
- (id)mockPluginEndpoint;
- (void)setMMotherController:(id)arg1;
- (void)setParentVoiceController:(id)arg1;

@end
