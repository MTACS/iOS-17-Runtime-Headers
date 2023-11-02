
@interface CLISetupInteractor : NSObject <AVAudioPlayerDelegate, FMFSessionDelegate> {
    bool  _activeDeviceEnabled;
    unsigned int  _delayTime;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _homeIndex;
    NSString * _homeName;
    unsigned char  _homePodType;
    bool  _locationEnabled;
    bool  _odeonEnabled;
    SFDevice * _peerDevice;
    unsigned long long  _peerFeatureFlags;
    bool  _personalRequestsEnabled;
    bool  _psgEnabled;
    bool  _recognizeVoiceEnabled;
    int  _roomIndex;
    NSString * _roomName;
    HDSSetupSession * _setupSession;
    bool  _siriEnabled;
    bool  _siriForICloudEnabled;
    bool  _soundRecognitionEnabled;
    unsigned long long  _stereoPairIndex;
    int  _stereoRole;
    int  _suggestedRoomIndex;
    unsigned long long  _testFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic) unsigned long long peerFeatureFlags;
@property (nonatomic, retain) HDSSetupSession *setupSession;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long testFlags;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_cleanupSession;
- (void)_invalidate;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (unsigned long long)peerFeatureFlags;
- (void)sessionHandleProgress:(unsigned int)arg1 inInfo:(id)arg2 session:(id)arg3;
- (void)setCLIPromptsForStates;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPeerFeatureFlags:(unsigned long long)arg1;
- (void)setSetupSession:(id)arg1;
- (void)setSetupUserInputConfig:(id)arg1;
- (void)setTestFlags:(unsigned long long)arg1;
- (id)setupSession;
- (unsigned long long)testFlags;

@end
