
@interface AVAudioClient : NSObject {
    bool  _audioSessionIsActive;
    bool  _audioSessionIsStarted;
    NSCondition * _audioSessionRefCondVar;
    NSObject<OS_dispatch_queue> * _clientAudioSessionQueue;
    unsigned int  _connectionAttempts;
    bool  _followSystemInputEnabled;
    bool  _followSystemOutputEnabled;
    bool  _mixingVoiceWithMediaEnabled;
    id /* block */  _mutedTalkerNotificationHandler;
    int  _processId;
    id /* block */  _secureMicrophoneEngagedHandler;
    AVConferenceXPCClient * _xpcConnection;
    AVAudioDeviceList * deviceList;
}

@property (nonatomic) id /* block */ changeListener;
@property (nonatomic, readonly) AVAudioDevice *currentInputDevice;
@property (nonatomic, readonly) AVAudioDevice *currentOutputDevice;
@property (nonatomic, retain) AVAudioDeviceList *deviceList;
@property (getter=isMicrophoneMuted, nonatomic) bool microphoneMuted;
@property (getter=isMixingVoiceWithMediaEnabled, nonatomic) bool mixingVoiceWithMediaEnabled;

+ (id)currentInputDevice;
+ (id)currentOutputDevice;
+ (id)defaultInputDevice;
+ (id)defaultOutputDevice;
+ (bool)hasActiveAudioSession;
+ (bool)isMicrophoneMuted;
+ (bool)isMixingVoiceWithMediaEnabled;
+ (int)registerForMutedTalkerNotifications:(id /* block */)arg1;
+ (void)registerSecureMicrophoneEngagedHandler:(id /* block */)arg1;
+ (void)resetAudioSessionOutputPortOverride;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)setFollowSystemInputEnabled:(bool)arg1;
+ (void)setFollowSystemOutputEnabled:(bool)arg1;
+ (bool)setInputDevice:(id)arg1;
+ (void)setMicrophoneMuted:(bool)arg1;
+ (void)setMixingVoiceWithMediaEnabled:(bool)arg1;
+ (bool)setOutputDevice:(id)arg1;
+ (id)sharedInstance;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)arg1;
+ (void)stopAudioSession;
+ (int)unregisterFromMutedTalkerNotifications;

- (id /* block */)changeListener;
- (void)cleanupMutedTalkerNotificationHandler;
- (void)cleanupSecureMicrophoneEngagedHandler;
- (void)cleanupXPCConnection;
- (id)currentInputDevice;
- (id)currentOutputDevice;
- (void)dealloc;
- (id)deviceList;
- (id)devices;
- (void)handleMutedTalkerNotificationWithXPCArguments:(id)arg1;
- (bool)hasActiveAudioSession;
- (id)init;
- (id)initSharedInstance;
- (id)inputDevices;
- (bool)isMicrophoneMuted;
- (bool)isMixingVoiceWithMediaEnabled;
- (id)outputDevices;
- (void)registerBlocksForDelegateNotifications;
- (int)registerForMutedTalkerNotifications:(id /* block */)arg1;
- (void)registerSecureMicrophoneEngagedHandler:(id /* block */)arg1;
- (bool)reregisterMutedTalkerNotificationOverXPC;
- (void)resetAudioSessionOutputPortOverride;
- (void)resetXPCConnection;
- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id /* block */)arg3;
- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;
- (void)setAudioSessionProperties:(id)arg1;
- (void)setChangeListener:(id /* block */)arg1;
- (void)setDeviceList:(id)arg1;
- (void)setFollowSystemInputEnabled:(bool)arg1;
- (void)setFollowSystemOutputEnabled:(bool)arg1;
- (bool)setInputDevice:(id)arg1;
- (void)setMicrophoneMuted:(bool)arg1;
- (void)setMixingVoiceWithMediaEnabled:(bool)arg1;
- (bool)setOutputDevice:(id)arg1;
- (bool)setupXPCConnection;
- (void)startAudioSessionWithCompletionHandler:(id /* block */)arg1;
- (void)stopAudioSession;
- (void)unregisterBlocksForDelegateNotifications;
- (int)unregisterFromMutedTalkerNotifications;

@end
