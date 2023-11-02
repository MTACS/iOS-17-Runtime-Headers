
@interface PXMemoriesFeedSettings : PXSettings {
    double  _additionalContentThreshold;
    bool  _alwaysShowOnboarding;
    long long  _dataSourceType;
    bool  _disableRoundedOverlays;
    bool  _displayContentDuringGraphRebuild;
    long long  _favoriteMemoriesSortOrder;
    bool  _forceReloadAfterRefresh;
    unsigned long long  _groupsPerBatch;
    double  _memoryGroupingInterval;
    long long  _memoryGroupingMethod;
    bool  _rankMemoriesByRelevanceScore;
    long long  _sharingBehavior;
    bool  _useSlowAnimations;
}

@property (nonatomic) double additionalContentThreshold;
@property (nonatomic) bool alwaysShowOnboarding;
@property (nonatomic) long long dataSourceType;
@property (nonatomic) bool disableRoundedOverlays;
@property (nonatomic) bool displayContentDuringGraphRebuild;
@property (nonatomic) long long favoriteMemoriesSortOrder;
@property (nonatomic) bool forceReloadAfterRefresh;
@property (nonatomic) unsigned long long groupsPerBatch;
@property (nonatomic) double memoryGroupingInterval;
@property (nonatomic) long long memoryGroupingMethod;
@property (nonatomic) bool rankMemoriesByRelevanceScore;
@property (nonatomic) long long sharingBehavior;
@property (nonatomic) bool useSlowAnimations;

+ (id)_resetRejectedMemories;
+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)_defaultDataSourceType;
- (double)additionalContentThreshold;
- (bool)alwaysShowOnboarding;
- (long long)dataSourceType;
- (bool)disableRoundedOverlays;
- (bool)displayContentDuringGraphRebuild;
- (long long)favoriteMemoriesSortOrder;
- (bool)forceReloadAfterRefresh;
- (unsigned long long)groupsPerBatch;
- (double)memoryGroupingInterval;
- (long long)memoryGroupingMethod;
- (id)parentSettings;
- (bool)rankMemoriesByRelevanceScore;
- (void)setAdditionalContentThreshold:(double)arg1;
- (void)setAlwaysShowOnboarding:(bool)arg1;
- (void)setDataSourceType:(long long)arg1;
- (void)setDefaultValues;
- (void)setDisableRoundedOverlays:(bool)arg1;
- (void)setDisplayContentDuringGraphRebuild:(bool)arg1;
- (void)setFavoriteMemoriesSortOrder:(long long)arg1;
- (void)setForceReloadAfterRefresh:(bool)arg1;
- (void)setGroupsPerBatch:(unsigned long long)arg1;
- (void)setMemoryGroupingInterval:(double)arg1;
- (void)setMemoryGroupingMethod:(long long)arg1;
- (void)setRankMemoriesByRelevanceScore:(bool)arg1;
- (void)setSharingBehavior:(long long)arg1;
- (void)setUseSlowAnimations:(bool)arg1;
- (long long)sharingBehavior;
- (bool)useSlowAnimations;

@end
