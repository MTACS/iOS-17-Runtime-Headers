
@interface CSLPRFStingSettingsModel : NSObject <CSLPRFTwoWaySyncSettingDelegate> {
    NSDictionary * _actionIdentifierToSupportedBundleIDsMap;
    NSArray * _defaultActionTypeItems;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    CSLPRFStingSettingsModelData * _settingsData;
    CSLPRFStingSystemSettings * _stingSystemSettings;
}

@property (nonatomic, retain) NSDictionary *actionIdentifierToSupportedBundleIDsMap;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSArray *defaultActionTypeItems;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSLPRFStingSettingsModelData *settingsData;
@property (readonly) Class superclass;

+ (id)actionNameForActionType:(unsigned long long)arg1;
+ (id)alternateActionNameForActionType:(unsigned long long)arg1;
+ (id)sfSymbolAssetNameForActionType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_buildActionIdentifierToSupportedBundleIDsMap:(id)arg1;
- (id)_buildDefaultActionTypeItems;
- (bool)_lock_isLinkActionSupportedForIdentifier:(id)arg1;
- (void)_lock_rebuildModels;
- (id)_modelItemWithActionType:(unsigned long long)arg1;
- (void)_withLock:(id /* block */)arg1;
- (id)actionIdentifierToSupportedBundleIDsMap;
- (id)bundleIDsForActionType:(unsigned long long)arg1;
- (id)defaultActionTypeItems;
- (id)defaultQuickActionItems;
- (id)init;
- (id)quickActionItems;
- (void)rebuildModel;
- (void)setActionIdentifierToSupportedBundleIDsMap:(id)arg1;
- (void)setDefaultActionTypeItems:(id)arg1;
- (void)setSettingsData:(id)arg1;
- (id)settingsData;
- (id)shortcutItems;
- (id)startWorkoutsListForBundleID:(id)arg1;
- (void)twoWaySyncSettingDidUpdate:(id)arg1;

@end
