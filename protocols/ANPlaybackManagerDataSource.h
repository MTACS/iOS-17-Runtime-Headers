
@protocol ANPlaybackManagerDataSource <NSObject>

@required

- (NSArray *)announcementsForPlaybackManager:(ANPlaybackManager *)arg1;
- (void)cleanUpOldAnnouncementsForPlaybackManager:(ANPlaybackManager *)arg1;
- (NSArray *)playbackManager:(ANPlaybackManager *)arg1 announcementsForIdentifiers:(NSArray *)arg2;

@end
