
@interface AXHALiveListenController : NSObject {
    AXDispatchTimer * _accessoryUpdateTimer;
    struct OpaqueExtAudioFile { } * _debugAudioFile;
    <AXHALiveListenDelegate> * _delegate;
    bool  _didInitializeAudioUnit;
    bool  _exportsLiveListenToFile;
    struct OpaqueAudioComponentInstance { } * _mixerUnit;
    float  _noise;
    struct OpaqueAudioComponentInstance { } * _rioUnit;
    AVAudioSession * _session;
    float  _signal;
    bool  _waitingForAccessoryUpdate;
    bool  isListening;
}

@property (nonatomic, retain) AXDispatchTimer *accessoryUpdateTimer;
@property (nonatomic) <AXHALiveListenDelegate> *delegate;
@property (nonatomic) bool didInitializeAudioUnit;
@property (nonatomic) bool exportsLiveListenToFile;
@property (nonatomic) bool isListening;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*mixerUnit;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*rioUnit;
@property (nonatomic, retain) AVAudioSession *session;
@property (nonatomic) bool waitingForAccessoryUpdate;

- (void).cxx_destruct;
- (id)accessoryUpdateTimer;
- (float)audioLevel;
- (void)audioRouteDidChange:(id)arg1;
- (void)audioSessionWasInterrupted:(id)arg1;
- (void)dealloc;
- (struct OpaqueExtAudioFile { }*)debugAudioFile;
- (id)delegate;
- (bool)didInitializeAudioUnit;
- (bool)exportsLiveListenToFile;
- (id)init;
- (bool)isListening;
- (void)mediaServicesWereReset:(id)arg1;
- (struct OpaqueAudioComponentInstance { }*)mixerUnit;
- (struct OpaqueAudioComponentInstance { }*)rioUnit;
- (id)session;
- (void)setAccessoryUpdateTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidInitializeAudioUnit:(bool)arg1;
- (void)setExportsLiveListenToFile:(bool)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setWaitingForAccessoryUpdate:(bool)arg1;
- (bool)startListeningWithError:(id*)arg1;
- (bool)stopListeningWithError:(id*)arg1;
- (bool)waitingForAccessoryUpdate;

@end
