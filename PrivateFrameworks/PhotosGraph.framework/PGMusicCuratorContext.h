
@interface PGMusicCuratorContext : NSObject {
    void $__lazy_storage_$_flexMusicSongs;
    void $__lazy_storage_$_keywordsByAdamID;
    void adamIDsWithNegativeUserFeedback;
    void allowChillMixElection;
    void allowExplicitMusicContent;
    void allowGetUpMixElection;
    void blocklistConfiguration;
    void cache;
    void configuration;
    void forceShareableInBestSuggestions;
    void musicBag;
    void musicCurationOverrideDictionary;
    void musicForTopicUseTopicOnly;
    void photoLibrary;
    void recentlyUsedSongs;
    void refreshSongMetadata;
    void useOnlyMusicForTopicInTopPickSuggestions;
}

@property (nonatomic) bool allowChillMixElection;
@property (nonatomic) bool allowGetUpMixElection;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool forceShareableInBestSuggestions;
@property (nonatomic, copy) NSDictionary *musicCurationOverrideDictionary;
@property (nonatomic, readonly) PGMusicCurationRecentlyUsedSongs *recentlyUsedSongs;
@property (nonatomic) bool refreshSongMetadata;
@property (nonatomic) bool useOnlyMusicForTopicInTopPickSuggestions;

+ (id)contextWithPhotoLibrary:(id)arg1 adamIDsWithNegativeUserFeedback:(id)arg2 allowExplicitMusicContent:(id)arg3 cache:(id)arg4 musicBag:(id)arg5 recentlyUsedSongs:(id)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (bool)allowChillMixElection;
- (bool)allowGetUpMixElection;
- (id)description;
- (bool)forceShareableInBestSuggestions;
- (id)init;
- (id)musicCurationOverrideDictionary;
- (id)recentlyUsedSongs;
- (bool)refreshSongMetadata;
- (void)setAllowChillMixElection:(bool)arg1;
- (void)setAllowGetUpMixElection:(bool)arg1;
- (void)setForceShareableInBestSuggestions:(bool)arg1;
- (void)setMusicCurationOverrideDictionary:(id)arg1;
- (void)setRefreshSongMetadata:(bool)arg1;
- (void)setUseOnlyMusicForTopicInTopPickSuggestions:(bool)arg1;
- (bool)useOnlyMusicForTopicInTopPickSuggestions;

@end
