
@interface GKContentPropertyList : NSObject {
    NSDictionary * _achievementsByIdentifier;
    NSString * _bundleID;
    NSDictionary * _leaderboardSetsByIdentifier;
    NSDictionary * _leaderboardsByIdentifier;
    NSDictionary * _root;
}

@property (retain) NSString *bundleID;
@property (retain) NSDictionary *root;

+ (id)localPropertyListForGameDescriptor:(id)arg1;

- (void).cxx_destruct;
- (id)_mainBundle;
- (id)_rootDictionary;
- (id)achievementDescriptionForIdentifier:(id)arg1;
- (id)achievementDescriptions;
- (id)bundleID;
- (id)imageNameForDashboardLogo;
- (id)leaderboardDescriptionForIdentifier:(id)arg1;
- (id)leaderboardDescriptions;
- (id)leaderboardSetDescriptionForIdentifier:(id)arg1;
- (id)leaderboardSetDescriptions;
- (id)localizedStringForKey:(id)arg1;
- (id)root;
- (void)setBundleID:(id)arg1;
- (void)setRoot:(id)arg1;

@end
