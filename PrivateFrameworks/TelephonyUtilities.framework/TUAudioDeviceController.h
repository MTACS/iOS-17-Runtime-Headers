
@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {
    <TUAudioDeviceControllerActions> * _actionsDelegate;
    AVAudioClient * _audioClient;
    NSHashTable * _delegates;
    id /* block */  _registerForMutedTalkerNotificationCallback;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic) <TUAudioDeviceControllerActions> *actionsDelegate;
@property (nonatomic, retain) AVAudioClient *audioClient;
@property (nonatomic, retain) AVAudioDevice *currentInputDevice;
@property (nonatomic, retain) AVAudioDevice *currentOutputDevice;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputDevices;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, copy) id /* block */ registerForMutedTalkerNotificationCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

+ (void)prewarm;

- (void).cxx_destruct;
- (void)_handleCallStatusChangedNotification:(id)arg1;
- (id)actionsDelegate;
- (void)addDelegate:(id)arg1;
- (id)audioClient;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (void)dealloc;
- (id)debugDescription;
- (id)delegates;
- (id)devices;
- (id)init;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (id)inputDevices;
- (void)notifyDelegatesOfDeviceListChange;
- (id)outputDevices;
- (id /* block */)registerForMutedTalkerNotificationCallback;
- (void)removeDelegate:(id)arg1;
- (id)serialQueue;
- (void)setActionsDelegate:(id)arg1;
- (void)setAudioClient:(id)arg1;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
- (void)setCurrentInputDevice:(id)arg1;
- (void)setCurrentOutputDevice:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setFollowsSystemInputSetting:(bool)arg1;
- (void)setFollowsSystemOutputSetting:(bool)arg1;
- (void)setMediaPlaybackOnExternalDevice:(bool)arg1;
- (void)setMixesVoiceWithMedia:(bool)arg1;
- (void)setRegisterForMutedTalkerNotificationCallback:(id /* block */)arg1;
- (void)setSerialQueue:(id)arg1;

@end
