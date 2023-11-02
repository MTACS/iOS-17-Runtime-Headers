
@interface ICLiveLinkPlaybackCoordinatorMedium : NSObject {
    NSMutableArray * _fetchServerStateCompletions;
    long long  _fetchServerStateInProgressCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _fetchServerStateLock;
    ICLiveLink * _liveLink;
    NSUUID * _localParticipantUUID;
}

@property (nonatomic, readonly) NSMutableArray *fetchServerStateCompletions;
@property (nonatomic, readonly) long long fetchServerStateInProgressCount;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } fetchServerStateLock;
@property (nonatomic, readonly) ICLiveLink *liveLink;
@property (nonatomic, readonly, copy) NSUUID *localParticipantUUID;

- (void).cxx_destruct;
- (void)_broadcastLocalParticipantStateDictionary:(id)arg1;
- (void)_broadcastTransportControlStateDictionary:(id)arg1 forItemWithIdentifier:(id)arg2;
- (void)_reloadTransportControlStateForItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearCoordinationMediumDelegate;
- (id)fetchServerStateCompletions;
- (long long)fetchServerStateInProgressCount;
- (struct os_unfair_lock_s { unsigned int x1; })fetchServerStateLock;
- (void)handleNewParticipantStateDictionary:(id)arg1;
- (void)handleNewTransportControlStateDictionary:(id)arg1;
- (void)handlePlaybackSyncPayload:(id)arg1;
- (id)initWithLiveLink:(id)arg1;
- (bool)isCoordinatorSuspended;
- (id)liveLink;
- (id)localParticipantUUID;
- (void)removeParticipant:(id)arg1;
- (void)synchronizePlaybackStateForReason:(id)arg1;

@end
