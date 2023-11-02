
@interface MPCAssistantStoreTracklistPlaybackQueue : MPCAssistantPlaybackQueue {
    MPIdentifierSet * _collectionIdentifierSet;
    long long  _shuffleType;
    NSArray * _storeItemIDs;
}

@property (nonatomic, readonly) MPIdentifierSet *collectionIdentifierSet;
@property (nonatomic) long long shuffleType;
@property (nonatomic, readonly) NSArray *storeItemIDs;

+ (id)storeTracklistQueueWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3;

- (void).cxx_destruct;
- (id)collectionIdentifierSet;
- (struct _MRSystemAppPlaybackQueue { }*)createRemotePlaybackQueue;
- (id)description;
- (id)initWithContextID:(id)arg1 storeItemIDs:(id)arg2 collectionIdentifierSet:(id)arg3;
- (void)setShuffleType:(long long)arg1;
- (long long)shuffleType;
- (id)storeItemIDs;

@end
