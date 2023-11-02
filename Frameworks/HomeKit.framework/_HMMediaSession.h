
@interface _HMMediaSession : NSObject <HMFMessageReceiver, HMObjectMerge> {
    HMAudioControl * _audioControl;
    _HMContext * _context;
    <_HMMediaSessionDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _mediaUniqueIdentifier;
    NSUUID * _messageTargetUUID;
    long long  _playbackState;
    long long  _repeatState;
    NSString * _routeUID;
    long long  _shuffleState;
    unsigned long long  _sleepWakeState;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (readonly) HMAudioControl *audioControl;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_HMMediaSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *mediaUniqueIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, retain) NSUUID *messageTargetUUID;
@property (readonly) long long playbackState;
@property (readonly) long long repeatState;
@property (nonatomic, readonly) NSString *routeUID;
@property (readonly) long long shuffleState;
@property (readonly) unsigned long long sleepWakeState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (void)_handleSessionPlaybackUpdated:(id)arg1;
- (void)_handleSessionRouteUIDUpdated:(id)arg1;
- (void)_notifyDelegateOfUpdatedMediaState;
- (void)_notifyDelegateOfUpdatedPlaybackState:(long long)arg1;
- (void)_notifyDelegateOfUpdatedRouteUID:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_updateMediaState:(id)arg1 completion:(id /* block */)arg2;
- (id)audioControl;
- (id)context;
- (id)delegate;
- (unsigned long long)hash;
- (id)initWithUUID:(id)arg1 routeUID:(id)arg2 playbackState:(long long)arg3 shuffleState:(long long)arg4 repeatState:(long long)arg5 audioControl:(id)arg6 mediaUniqueIdentifier:(id)arg7 sleepWakeState:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)mediaUniqueIdentifier;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (long long)playbackState;
- (void)refreshPlaybackStateWithCompletionHandler:(id /* block */)arg1;
- (long long)repeatState;
- (id)routeUID;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMediaUniqueIdentifier:(id)arg1;
- (void)setMessageTargetUUID:(id)arg1;
- (void)setPlaybackState:(long long)arg1;
- (void)setPlaybackState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)setRepeatState:(long long)arg1;
- (void)setRouteUID:(id)arg1;
- (void)setShuffleState:(long long)arg1;
- (void)setSleepWakeState:(unsigned long long)arg1;
- (void)setUuid:(id)arg1;
- (long long)shuffleState;
- (unsigned long long)sleepWakeState;
- (id)uniqueIdentifier;
- (void)updateMediaState:(id)arg1;
- (void)updatePlaybackState:(id)arg1;
- (id)uuid;

@end
