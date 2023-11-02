
@interface IDSSession : NSObject {
    _IDSSession * _internal;
    NSString * _uniqueID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _uniqueIDLock;
}

@property (nonatomic, readonly) NSString *destination;
@property (nonatomic) long long invitationTimeOut;
@property (nonatomic) bool isAudioEnabled;
@property (nonatomic) bool isMuted;
@property (nonatomic, readonly) unsigned int sessionEndedReason;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) int socket;
@property (nonatomic, retain) NSString *uniqueID;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

- (void).cxx_destruct;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)_internal;
- (id)_streamPreferences;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (id)description;
- (id)destination;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (unsigned long long)initialLinkType;
- (long long)invitationTimeOut;
- (bool)isAudioEnabled;
- (bool)isMuted;
- (void)reconnectSession;
- (void)sendAllocationRequest:(id)arg1;
- (bool)sendData:(id)arg1 error:(id*)arg2;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(bool)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;
- (unsigned int)sessionEndedReason;
- (id)sessionID;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setInvitationTimeOut:(long long)arg1;
- (void)setIsAudioEnabled:(bool)arg1;
- (void)setIsMuted:(bool)arg1;
- (void)setPreferences:(id)arg1;
- (void)setStreamPreferences:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (bool)shouldUseSocketForTransport;
- (int)socket;
- (unsigned int)state;
- (id)uniqueID;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)hmd_sessionWithAccount:(id)arg1 device:(id)arg2 options:(id)arg3;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)hmd_sessionWithAccount:(id)arg1 device:(id)arg2 options:(id)arg3;

@end
