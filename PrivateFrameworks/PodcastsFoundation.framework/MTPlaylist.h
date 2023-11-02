
@interface MTPlaylist : NSManagedObject

@property (nonatomic, retain) NSSet *addedEpisodes;
@property (nonatomic) int containerOrder;
@property (nonatomic, retain) MTPodcastPlaylistSettings *defaultSettings;
@property (nonatomic, retain) NSSet *deletedEpisodes;
@property (nonatomic) long long downloadedCount;
@property (nonatomic, retain) NSOrderedSet *episodes;
@property (nonatomic) long long flags;
@property (nonatomic) double generatedDate;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, readonly) bool isITunesPlaylist;
@property (nonatomic) long long mediaLibraryId;
@property (nonatomic) long long parentMediaLibraryId;
@property (nonatomic, retain) NSOrderedSet *podcasts;
@property (nonatomic, retain) NSOrderedSet *settings;
@property (nonatomic) long long sortOrder;
@property (nonatomic, retain) MTSyncInfo *syncInfo;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long unplayedCount;
@property (nonatomic) double updatedDate;
@property (nonatomic, retain) NSString *uuid;

+ (id)predicateForIsHidden:(bool)arg1;
+ (id)predicateForStationUUID:(id)arg1;
+ (id)propertiesToObserveForDownloadableEpisodes;
+ (id)sortDescriptors;
+ (id)topLevelPlaylistsPredicate;

- (bool)isFolder;
- (bool)isITunesPlaylist;
- (long long)mt_syncID;
- (bool)needsUpdate;
- (void)setMediaLibraryId:(long long)arg1;
- (void)setNeedsUpdate:(bool)arg1;

@end
