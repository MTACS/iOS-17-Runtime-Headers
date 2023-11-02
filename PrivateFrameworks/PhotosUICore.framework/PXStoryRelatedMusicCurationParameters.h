
@interface PXStoryRelatedMusicCurationParameters : NSObject {
    NSSet * _recentlyUsedAppleMusicSongIDs;
    NSSet * _recentlyUsedFlexSongIDs;
}

@property (nonatomic, copy) NSSet *recentlyUsedAppleMusicSongIDs;
@property (nonatomic, copy) NSSet *recentlyUsedFlexSongIDs;

- (void).cxx_destruct;
- (id)init;
- (id)recentlyUsedAppleMusicSongIDs;
- (id)recentlyUsedFlexSongIDs;
- (void)setRecentlyUsedAppleMusicSongIDs:(id)arg1;
- (void)setRecentlyUsedFlexSongIDs:(id)arg1;

@end
