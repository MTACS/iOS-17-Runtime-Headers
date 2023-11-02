
@protocol WBSTabOrderPreferenceProviding <NSObject>

@required

- (double)minimumDelayForRelatingNewBlankTab;
- (bool)newBlankTabPositionAppliesToAllBlankTabs;
- (unsigned long long)newTabPosition;
- (bool)newTabPositionAppliesToSpawnedTabs;
- (bool)suppressRelatingNewBlankTabs;

@end
