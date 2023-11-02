
@interface GKAchievement : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    GKGame * _game;
    GKAchievementInternal * _internal;
    GKPlayer * _player;
    bool  _showsCompletionBanner;
}

@property (getter=isCompleted, nonatomic, readonly) bool completed;
@property (nonatomic, retain) GKGame *game;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) NSString *identifier;
@property (retain) GKAchievementInternal *internal;
@property (nonatomic, copy) NSDate *lastReportedDate;
@property (nonatomic) double percentComplete;
@property (nonatomic, readonly) GKPlayer *player;
@property (nonatomic, copy) NSString *playerID;
@property (nonatomic) bool showsCompletionBanner;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)descriptionForAchievement:(id)arg1 achievementDescriptions:(id)arg2;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id /* block */)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(bool)arg3 includeHidden:(bool)arg4 withCompletionHandler:(id /* block */)arg5;
+ (void)loadAchievementsWithCompletionHandler:(id /* block */)arg1;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(bool)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)resetAchievementsWithCompletionHandler:(id /* block */)arg1;
+ (bool)shouldShowBannerOnReport:(id)arg1 reportedAchievements:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_achievementDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (id)internal;
- (bool)isCompleted;
- (bool)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (id)playerID;
- (void)reportAchievementWithCompletionHandler:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setGame:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setShowsCompletionBanner:(bool)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (bool)showsCompletionBanner;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id /* block */)arg3;

- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completion:(id /* block */)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)imageURL;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (void)loadImageWithCompletionHandler:(id /* block */)arg1;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)showBanner;

@end