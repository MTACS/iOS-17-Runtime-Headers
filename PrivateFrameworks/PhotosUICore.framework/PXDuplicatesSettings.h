
@interface PXDuplicatesSettings : PXSettings {
    bool  _showDuplicateGroupsWithASingleAsset;
}

@property (nonatomic) bool showDuplicateGroupsWithASingleAsset;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)setShowDuplicateGroupsWithASingleAsset:(bool)arg1;
- (bool)showDuplicateGroupsWithASingleAsset;

@end
