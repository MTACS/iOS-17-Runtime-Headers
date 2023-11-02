
@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {
    _HMContext * _context;
    <_HMAudioControlDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMMediaSession * _mediaSession;
    bool  _muted;
    NSUUID * _uniqueIdentifier;
    float  _volume;
}

@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <_HMAudioControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMMediaSession *mediaSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isMuted) bool muted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property float volume;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1;
- (void)_handleAudioControlUpdated:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)context;
- (id)delegate;
- (id)initWithMediaSession:(id)arg1;
- (bool)isMuted;
- (id)mediaSession;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (id)uniqueIdentifier;
- (void)updateMuted:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateVolume:(float)arg1 completionHandler:(id /* block */)arg2;
- (float)volume;

@end
