
@interface MOGameCenterSettingsGroup : MOSettingsGroup

@property (nonatomic, retain) NSNumber *denyAddingFriends;
@property (nonatomic, retain) NSNumber *denyMultiplayerGaming;

+ (id)denyAddingFriendsMetadata;
+ (id)denyMultiplayerGamingMetadata;
+ (id)groupName;

- (id)denyAddingFriends;
- (id)denyMultiplayerGaming;
- (void)setDenyAddingFriends:(id)arg1;
- (void)setDenyMultiplayerGaming:(id)arg1;

@end
