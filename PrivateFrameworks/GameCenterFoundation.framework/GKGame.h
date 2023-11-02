
@interface GKGame : NSObject <NSCoding, NSSecureCoding> {
    long long  _environment;
    GKGameInternal * _internal;
}

@property (nonatomic, readonly) NSNumber *adamID;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, readonly) NSString *defaultCategory;
@property long long environment;
@property (nonatomic, readonly) NSNumber *externalVersion;
@property (nonatomic, readonly) GKGameDescriptor *gameDescriptor;
@property (nonatomic, readonly) NSDictionary *gameDescriptorDictionary;
@property (nonatomic, readonly) struct GKGameInfo { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; } gameInfo;
@property (getter=isInstalled, nonatomic, readonly) bool installedGame;
@property (retain) GKGameInternal *internal;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long platform;
@property (getter=isPrerendered, nonatomic) bool prerendered;
@property (nonatomic, readonly) NSString *shortBundleVersion;
@property (readonly) NSURL *storeURL;
@property (nonatomic, readonly) bool supportsMultiplayer;
@property (nonatomic, readonly) bool supportsTurnBasedMultiplayer;
@property (readonly) <GKUtilityService> *utilityService;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)createNonStaticCurrentGame;
+ (id)currentGame;
+ (id)currentGameIncludingGameCenter:(bool)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (bool)isFirstParty;
+ (bool)isGameCenter;
+ (bool)isPreferences;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)arg1;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2;
+ (bool)supportsSecureCoding;
+ (void)updateGames:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)environment;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)gameDescriptor;
- (id)gameDescriptorDictionary;
- (struct GKGameInfo { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; })gameInfo;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(id /* block */)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(id /* block */)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(bool)arg1 handler:(id /* block */)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isAppStore;
- (bool)isContacts;
- (bool)isDaemon;
- (bool)isEqual:(id)arg1;
- (bool)isGameCenter;
- (bool)isGameControllerDaemon;
- (bool)isInternalTestApp;
- (bool)isSpringBoard;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)storeURL;
- (id)utilityService;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)platformDisplayString:(id)arg1;
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (struct CGSize { double x1; double x2; })serverImageSizeForIconStyle:(long long)arg1;

- (id)URLStringForImageWithShineIfNeeded;
- (id)_imageSourceForIconSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
- (id)cachedIconForStyle:(long long)arg1;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (bool)isInstalled;
- (id)loadIconForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)localImageSourceWithName:(id)arg1 imageBrush:(id)arg2;
- (id)logoImageWithMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)networkImageSourceWithName:(id)arg1 imageBrush:(id)arg2;
- (void)openAppStorePage;
- (id)utilityService;

@end
