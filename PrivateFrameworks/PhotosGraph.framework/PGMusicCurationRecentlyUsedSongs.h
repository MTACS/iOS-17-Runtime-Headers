
@interface PGMusicCurationRecentlyUsedSongs : NSObject {
    void mostRecentlyUsedSongIDDateMap;
}

@property (nonatomic, readonly) NSString *description;

+ (id)recentlyUsedAppleMusicSongsFromPhotoLibrary:(id)arg1;
+ (id)recentlyUsedFlexMusicSongsFromPhotoLibrary:(id)arg1;

- (void).cxx_destruct;
- (void)addFlexMusicCuration:(id)arg1 date:(id)arg2;
- (void)addMusicCuration:(id)arg1 date:(id)arg2;
- (void)addSongIDs:(id)arg1 date:(id)arg2;
- (void)addWithSongIDDateMap:(id)arg1;
- (id)description;
- (id)init;

@end
