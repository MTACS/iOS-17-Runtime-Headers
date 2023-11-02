
@interface MTSyncUtil : NSObject

+ (bool)bookmarksSyncDirtyFlagForSyncType:(long long)arg1;
+ (bool)isNonFollowedShowsSyncDirtyFlag;
+ (bool)isSubscriptionSyncEnabled;
+ (bool)playlistSyncDirtyFlag;
+ (id)podcastsDomainVersion;
+ (void)setBookmarksSyncDirtyFlag:(bool)arg1 syncType:(long long)arg2;
+ (void)setNonFollowedShowsSyncDirtyFlag:(bool)arg1;
+ (void)setPlaylistSyncDirtyFlag:(bool)arg1;
+ (void)setPodcastsDomainVersion:(id)arg1;
+ (void)setSubscriptionSyncDirtyFlag:(bool)arg1 syncType:(long long)arg2;
+ (bool)subscriptionSyncDirtyFlagForSyncType:(long long)arg1;
+ (id)userDefaultsKeyForBookmarksSyncType:(long long)arg1;
+ (id)userDefaultsKeyForSubscriptionSyncType:(long long)arg1;

@end
