
@protocol PXStoryMutableRelatedController <PXStoryMutableController>

@required

- (bool)isActive;
- (NSSet *)recentlyUsedAppleMusicSongIDs;
- (NSSet *)recentlyUsedFlexSongIDs;
- (void)setIsActive:(bool)arg1;
- (void)setRecentlyUsedAppleMusicSongIDs:(NSSet *)arg1;
- (void)setRecentlyUsedFlexSongIDs:(NSSet *)arg1;

@end
