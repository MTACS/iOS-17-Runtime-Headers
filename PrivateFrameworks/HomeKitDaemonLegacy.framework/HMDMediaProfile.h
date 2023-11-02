
@interface HMDMediaProfile : HMDAccessoryProfile <HMFLogging> {
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    HMDMediaSession * _mediaSession;
}

@property (readonly, copy) NSDictionary *assistantObject;
@property (nonatomic, readonly) unsigned long long capability;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMEEventForwarder> *eventForwarder;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *mediaRouteID;
@property (retain) HMDMediaSession *mediaSession;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *urlString;

+ (id)logCategory;
+ (id)namespace;
+ (id)sessionNamespace;
+ (bool)supportsSecureCoding;
+ (id)uniqueIdentifierFromAccessory:(id)arg1;
+ (id)uniqueIdentifierFromAccessoryUUID:(id)arg1;

- (void).cxx_destruct;
- (void)_handleMediaResponses:(id)arg1 message:(id)arg2;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleRefreshPlayback:(id)arg1;
- (void)_handleSetPlayback:(id)arg1;
- (void)_handleSetPower:(id)arg1;
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_sessionPlaybackStateUpdated:(id)arg1 notifyXPCClients:(bool)arg2;
- (bool)_updateAudioControl:(id)arg1;
- (bool)_updatePlayback:(id)arg1;
- (bool)_updateRefreshPlayback:(id)arg1;
- (id)assistantObject;
- (unsigned long long)capability;
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventForwarder;
- (void)handleSessionPlaybackStateUpdatedNotification:(id)arg1;
- (void)handleSessionUpdatedNotification:(id)arg1;
- (void)handleSessionVolumeUpdatedNotification:(id)arg1;
- (void)handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;
- (id)mediaRouteID;
- (id)mediaSession;
- (id)parseAndSetPlaybackStateFromResponsePayload:(id)arg1 mediaSessionState:(id)arg2 outDidUpdateMediaSessionState:(bool*)arg3;
- (void)registerForMessages;
- (void)registerForNotifications;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)setMediaSession:(id)arg1;
- (void)unregisterForNotifications;
- (void)updateWithResponses:(id)arg1 requestMessageInformation:(id)arg2;
- (id)urlString;

@end
