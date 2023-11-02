
@interface MSPSharedTripGroupSession : NSObject {
    <MSPSharedTripGroupSessionDelegate> * _delegate;
    NSString * _groupID;
    NSMutableSet * _identifiers;
    bool  _initiator;
    NSString * _initiatorDisplayName;
    NSString * _initiatorIdentifier;
    bool  _joined;
    NSString * _joinedFromAccountIdentifier;
    NSString * _joinedFromHandle;
    NSMutableSet * _liveModeParticipantIdentifiers;
    unsigned long long  _nbClients;
    IDSService * _sharingIDSService;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSArray *accountIdentifiers;
@property (nonatomic) <MSPSharedTripGroupSessionDelegate> *delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool inLiveMode;
@property (nonatomic, copy) NSString *initiatorDisplayName;
@property (nonatomic, readonly) NSString *initiatorIdentifier;

- (void).cxx_destruct;
- (id)_currentRoutePath;
- (bool)_isValidParticipant:(id)arg1;
- (bool)_joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2 error:(id*)arg3;
- (bool)_leaveLiveMode:(id*)arg1;
- (bool)_sendChunkMessage:(id)arg1 to:(id)arg2 packet:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (void)_sharingEnded;
- (void)_sharingEndedWithError:(id)arg1;
- (id)accountIdentifiers;
- (void)addSharingWith:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (bool)inLiveMode;
- (id)initWithService:(id)arg1 groupID:(id)arg2 initiator:(bool)arg3 initiatorIdentifier:(id)arg4;
- (id)initiatorDisplayName;
- (id)initiatorIdentifier;
- (bool)joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2 error:(id*)arg3;
- (bool)leaveLiveModeForced:(id*)arg1;
- (bool)leaveLiveModeIfNeeded:(id*)arg1;
- (void)participantDidJoin:(id)arg1;
- (void)participantDidLeave:(id)arg1;
- (bool)sendChunkedMessage:(id)arg1 to:(id)arg2 error:(id*)arg3;
- (bool)sendChunkedMessage:(id)arg1 to:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (bool)sendCommand:(id)arg1 fromHandle:(id)arg2 fromAccountID:(id)arg3 error:(id*)arg4;
- (bool)sessionIsAliveAfterRemovingSharingIdentifiers:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitiatorDisplayName:(id)arg1;

@end
