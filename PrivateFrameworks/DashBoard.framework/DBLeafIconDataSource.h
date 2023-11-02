
@interface DBLeafIconDataSource : NSObject <SBLeafIconDataSource> {
    DBApplicationInfo * _applicationInfo;
    NSString * _cachedBadgeValue;
    FBSApplicationDataStore * _dataStore;
    NSString * _identifier;
    CARSessionConfiguration * _sessionConfiguration;
}

@property (nonatomic, retain) DBApplicationInfo *applicationInfo;
@property (nonatomic, copy) NSString *cachedBadgeValue;
@property (nonatomic, readonly, copy) NSString *configurationStorageIdentifier;
@property (nonatomic, retain) FBSApplicationDataStore *dataStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) CARSessionConfiguration *sessionConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

+ (id)dataSourceForApplicationInfo:(id)arg1;
+ (id)dataSourceForNowPlayingIcon;
+ (id)dataSourceForOEMIconWithSessionConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 applicationInfo:(id)arg2 sessionConfiguration:(id)arg3;
- (bool)_stringIsDigits:(id)arg1;
- (long long)accessoryTypeForIcon:(id)arg1;
- (id)applicationInfo;
- (id)badgeNumberOrStringForIcon:(id)arg1;
- (id)cachedBadgeValue;
- (id)dataStore;
- (id)formattedAccessoryStringForIcon:(id)arg1;
- (id)icon:(id)arg1 defaultImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (id)icon:(id)arg1 unmaskedImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)iconAllowsLaunch:(id)arg1;
- (bool)iconCanTightenLabel:(id)arg1;
- (bool)iconCanTruncateLabel:(id)arg1;
- (bool)iconCompleteUninstall:(id)arg1;
- (bool)iconDisallowsLaunchForObscuredReason:(id)arg1;
- (bool)iconSupportsUninstall:(id)arg1;
- (id)identifier;
- (void)invalidateBadgeValue;
- (bool)isProgressPausedForIcon:(id)arg1;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (unsigned long long)priorityForIcon:(id)arg1;
- (double)progressPercentForIcon:(id)arg1;
- (long long)progressStateForIcon:(id)arg1;
- (id)sessionConfiguration;
- (void)setApplicationInfo:(id)arg1;
- (void)setCachedBadgeValue:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSessionConfiguration:(id)arg1;

@end
