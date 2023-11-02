
@interface GKUITheme : NSObject {
    NSCache * _resourceCache;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } authenticateExtensionFormSheetSize;
@property (nonatomic, readonly) double formSheetCornerRadius;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } formSheetSize;
@property (nonatomic, readonly, retain) GKNetworkImageSource *iconLeaderboardListSource;
@property (nonatomic, readonly, retain) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (nonatomic, readonly, retain) UIImage *interactiveRatingStarsBackground;
@property (nonatomic, readonly, retain) UIImage *interactiveRatingStarsForeground;
@property (nonatomic, readonly, retain) GKNetworkImageSource *macGameIconSource;
@property (nonatomic, readonly, retain) GKNetworkImageSource *photoDetailSource;
@property (nonatomic, readonly, retain) GKNetworkImageSource *photoListSource;
@property (nonatomic, readonly, retain) UIImage *ratingStarsBackgroundImage;
@property (nonatomic, readonly, retain) UIImage *ratingStarsForegroundImage;
@property (nonatomic, retain) NSCache *resourceCache;
@property (nonatomic, readonly) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (nonatomic, readonly) GKNetworkImageSource *untreatedAchievementImageSource;
@property (readonly) <GKUtilityService> *utilityService;

+ (id)sharedTheme;

- (void).cxx_destruct;
- (id)achievementsDefaultIcon;
- (id)achievementsNotStartedIcon;
- (struct CGSize { double x1; double x2; })authenticateExtensionFormSheetSize;
- (id)avatarSourceWithDimension:(long long)arg1;
- (void)clearResourceCache;
- (id)defaultLeaderboardIcon;
- (id)defaultPlayerPhoto;
- (id)eventIconImage;
- (double)formSheetCornerRadius;
- (struct CGSize { double x1; double x2; })formSheetSize;
- (id)groupImageSourceWithDimension:(long long)arg1;
- (id)iconLeaderboardListSource;
- (id)iconLeaderboardSetListSource;
- (id)imageNamed:(id)arg1;
- (id)init;
- (id)interactiveRatingStarsBackground;
- (id)interactiveRatingStarsForeground;
- (id)localImageSourceWithName:(id)arg1 imageBrush:(id)arg2;
- (id)macGameIconSource;
- (id)messagesInviteBackgroundImage;
- (id)monogramSourceWithDimension:(long long)arg1;
- (id)navbarActionButtonIcon;
- (id)networkImageSourceWithName:(id)arg1 imageBrush:(id)arg2;
- (id)photoDetailSource;
- (id)photoListSource;
- (id)placeholderSourceWithDimension:(long long)arg1;
- (id)playerPickerSelectedImage;
- (id)playerPickerUnselectedImage;
- (id)ratingStarsBackgroundImage;
- (id)ratingStarsForegroundImage;
- (id)removePlayerButtonImage;
- (id)resourceCache;
- (id)resourceForSelector:(SEL)arg1 missingHandler:(id /* block */)arg2;
- (id)resourceWithName:(id)arg1 missingHandler:(id /* block */)arg2;
- (id)secondaryLabelCompositingFilter;
- (void)setResourceCache:(id)arg1;
- (id)statusDotImage;
- (id)untreatedAchievementImageDetailSource;
- (id)untreatedAchievementImageSource;
- (id)utilityService;

@end
