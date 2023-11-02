
@interface HMCameraStream : HMCameraSource <HMFMessageReceiver> {
    unsigned long long  _internalAudioStreamSetting;
    NSNumber * _internalAudioVolume;
    NSString * _sessionID;
}

@property (nonatomic, readonly) unsigned long long audioStreamSetting;
@property (nonatomic, readonly) NSNumber *audioVolume;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long internalAudioStreamSetting;
@property (copy) NSNumber *internalAudioVolume;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly, copy) NSString *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 withError:(id)arg2 context:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAudioVolume:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)audioStreamSetting;
- (id)audioVolume;
- (void)dealloc;
- (id)initWithProfileUniqueIdentifier:(id)arg1 sessionID:(id)arg2 slotIdentifier:(id)arg3 aspectRatio:(id)arg4 audioStreamSetting:(unsigned long long)arg5;
- (unsigned long long)internalAudioStreamSetting;
- (id)internalAudioVolume;
- (id)sessionID;
- (void)setAudioStreamSetting:(unsigned long long)arg1;
- (void)setInternalAudioStreamSetting:(unsigned long long)arg1;
- (void)setInternalAudioVolume:(id)arg1;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)updateAudioVolume:(id)arg1 completionHandler:(id /* block */)arg2;

@end
