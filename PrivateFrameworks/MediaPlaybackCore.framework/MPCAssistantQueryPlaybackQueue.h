
@interface MPCAssistantQueryPlaybackQueue : MPCAssistantPlaybackQueue {
    MPMediaItem * _firstItem;
    MPMediaQuery * _query;
    long long  _shuffleType;
}

@property (nonatomic, retain) MPMediaItem *firstItem;
@property (nonatomic, readonly) MPMediaQuery *query;
@property (nonatomic) long long shuffleType;

+ (id)queryQueueWithContextID:(id)arg1 query:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)firstItem;
- (void)getPlaybackQueueWithDestination:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContextID:(id)arg1 query:(id)arg2;
- (id)query;
- (void)setFirstItem:(id)arg1;
- (void)setShuffleType:(long long)arg1;
- (long long)shuffleType;

@end
