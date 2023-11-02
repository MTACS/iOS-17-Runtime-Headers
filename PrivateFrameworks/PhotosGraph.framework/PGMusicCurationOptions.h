
@interface PGMusicCurationOptions : NSObject {
    bool  _includeChillMixInMusicForYou;
    bool  _includeGetUpMixInMusicForYou;
    NSArray * _recentlyUsedBundledSongIDs;
    NSArray * _recentlyUsedSongAdamIDs;
    NSString * _rootMemoryLocalIdentifier;
    bool  _shouldCurateUpNextMemories;
    bool  _shouldForceShareableInBestSuggestions;
    bool  _shouldRefreshSongMetadata;
    bool  _useOnlyMusicForTopicInTopPickSuggestions;
}

@property (nonatomic, readonly) bool includeChillMixInMusicForYou;
@property (nonatomic, readonly) bool includeGetUpMixInMusicForYou;
@property (nonatomic, readonly) NSArray *recentlyUsedBundledSongIDs;
@property (nonatomic, readonly) NSArray *recentlyUsedSongAdamIDs;
@property (nonatomic, readonly) NSString *rootMemoryLocalIdentifier;
@property (nonatomic, readonly) bool shouldCurateUpNextMemories;
@property (nonatomic, readonly) bool shouldForceShareableInBestSuggestions;
@property (nonatomic, readonly) bool shouldRefreshSongMetadata;
@property (nonatomic, readonly) bool useOnlyMusicForTopicInTopPickSuggestions;

- (void).cxx_destruct;
- (bool)includeChillMixInMusicForYou;
- (bool)includeGetUpMixInMusicForYou;
- (id)initForMemoryEnrichment;
- (id)initForUpNextMemoryRequestWithOptionsDictionary:(id)arg1;
- (id)initWithOptionsDictionary:(id)arg1;
- (id)recentlyUsedBundledSongIDs;
- (id)recentlyUsedSongAdamIDs;
- (id)rootMemoryLocalIdentifier;
- (bool)shouldCurateUpNextMemories;
- (bool)shouldForceShareableInBestSuggestions;
- (bool)shouldRefreshSongMetadata;
- (bool)useOnlyMusicForTopicInTopPickSuggestions;

@end
