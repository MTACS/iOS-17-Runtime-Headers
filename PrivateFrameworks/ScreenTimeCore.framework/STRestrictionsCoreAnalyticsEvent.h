
@interface STRestrictionsCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _contentAndPrivacyRestrictionsEnabled;
    bool  _gameCenterAddingFriendsIsRestricted;
    bool  _gameCenterAvatarAndNicknameChangesIsRestricted;
    bool  _gameCenterConnectWithFriendsIsRestricted;
    bool  _gameCenterMultiplayerGamesIsRestricted;
    bool  _gameCenterNearbyMultiplayerIsRestricted;
    bool  _gameCenterPrivateMessagingIsRestricted;
    bool  _gameCenterProfilePrivacyChangesIsRestricted;
    bool  _gameCenterScreenRecordingIsRestricted;
    bool  _mediaAndAppleMusicIsRestricted;
    long long  _userAgeGroup;
    bool  _userIsManaged;
}

@property (readonly) bool contentAndPrivacyRestrictionsEnabled;
@property (readonly, copy) NSString *description;
@property (readonly) bool gameCenterAddingFriendsIsRestricted;
@property (readonly) bool gameCenterAvatarAndNicknameChangesIsRestricted;
@property (readonly) bool gameCenterConnectWithFriendsIsRestricted;
@property (readonly) bool gameCenterMultiplayerGamesIsRestricted;
@property (readonly) bool gameCenterNearbyMultiplayerIsRestricted;
@property (readonly) bool gameCenterPrivateMessagingIsRestricted;
@property (readonly) bool gameCenterProfilePrivacyChangesIsRestricted;
@property (readonly) bool gameCenterScreenRecordingIsRestricted;
@property (readonly) bool mediaAndAppleMusicIsRestricted;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;
@property (readonly) long long userAgeGroup;
@property (readonly) bool userIsManaged;

+ (id)description;

- (bool)contentAndPrivacyRestrictionsEnabled;
- (bool)gameCenterAddingFriendsIsRestricted;
- (bool)gameCenterAvatarAndNicknameChangesIsRestricted;
- (bool)gameCenterConnectWithFriendsIsRestricted;
- (bool)gameCenterMultiplayerGamesIsRestricted;
- (bool)gameCenterNearbyMultiplayerIsRestricted;
- (bool)gameCenterPrivateMessagingIsRestricted;
- (bool)gameCenterProfilePrivacyChangesIsRestricted;
- (bool)gameCenterScreenRecordingIsRestricted;
- (id)initWithContentAndPrivacyRestrictionsEnabled:(bool)arg1 mediaAndAppleMusicIsRestricted:(bool)arg2 gameCenterMultiplayerGamesIsRestricted:(bool)arg3 gameCenterAddingFriendsIsRestricted:(bool)arg4 gameCenterConnectWithFriendsIsRestricted:(bool)arg5 gameCenterScreenRecordingIsRestricted:(bool)arg6 gameCenterNearbyMultiplayerIsRestricted:(bool)arg7 gameCenterPrivateMessagingIsRestricted:(bool)arg8 gameCenterProfilePrivacyChangesIsRestricted:(bool)arg9 gameCenterAvatarAndNicknameChangesIsRestricted:(bool)arg10 userAgeGroup:(long long)arg11 userIsManaged:(bool)arg12;
- (bool)mediaAndAppleMusicIsRestricted;
- (id)name;
- (id)payload;
- (long long)userAgeGroup;
- (bool)userIsManaged;

@end
