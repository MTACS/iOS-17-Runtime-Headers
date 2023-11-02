
@interface VUIMediaInfoFetchController : NSObject {
    NSMutableArray * _imageOperations;
    NSOperationQueue * _imageQueue;
    unsigned long long  _index;
    NSArray * _mediaInfos;
    unsigned long long  _playerPreloadOffset;
    bool  _preloadPlaybackEnabled;
    NSMutableDictionary * _prewarmedPlayers;
}

@property (nonatomic, retain) NSMutableArray *imageOperations;
@property (nonatomic, retain) NSOperationQueue *imageQueue;
@property (nonatomic) unsigned long long index;
@property (nonatomic, copy) NSArray *mediaInfos;
@property (nonatomic) unsigned long long playerPreloadOffset;
@property (getter=isPreloadPlaybackEnabled, nonatomic) bool preloadPlaybackEnabled;
@property (nonatomic, retain) NSMutableDictionary *prewarmedPlayers;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_createPlayerWithPlaylist:(id)arg1 isForPrewarming:(bool)arg2;
- (id)_identifierForPlaylist:(id)arg1 isForPrewarming:(bool)arg2;
- (void)_populateQueueWithMediaInfos:(id)arg1;
- (id)_prewarmIndices;
- (void)_removePrewarmedPlayerForIdentifier:(id)arg1;
- (void)_updateImageOperationPriorities;
- (void)_updatePrewarmedPlayers;
- (void)appendMediaInfos:(id)arg1;
- (void)clearPreloadedPlayback;
- (void)dealloc;
- (id)imageOperations;
- (id)imageQueue;
- (unsigned long long)index;
- (id)init;
- (id)initWithMediaInfos:(id)arg1;
- (bool)isPreloadPlaybackEnabled;
- (void)loadImageAtIndex:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)loadPlayerAtIndex:(unsigned long long)arg1;
- (id)mediaInfos;
- (unsigned long long)playerPreloadOffset;
- (void)preloadPlayback;
- (id)prewarmedPlayers;
- (long long)queuePriorityForIndex:(long long)arg1 itemCount:(long long)arg2 selectedIndex:(long long)arg3;
- (void)removeMediaInfoAtIndex:(unsigned long long)arg1;
- (void)setImageOperations:(id)arg1;
- (void)setImageQueue:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;
- (void)setMediaInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setMediaInfos:(id)arg1;
- (void)setPlayerPreloadOffset:(unsigned long long)arg1;
- (void)setPreloadPlaybackEnabled:(bool)arg1;
- (void)setPrewarmedPlayers:(id)arg1;

@end
