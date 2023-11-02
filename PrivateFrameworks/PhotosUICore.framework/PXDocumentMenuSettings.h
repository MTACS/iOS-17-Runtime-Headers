
@interface PXDocumentMenuSettings : PXSettings {
    long long  _actionsMenuLocation;
    bool  _enableActionsMenuOnPad;
    bool  _enableActionsMenuOnPhone;
    bool  _excludeActionsFromShareSheet;
    bool  _showAddToSharedAlbumAction;
}

@property (nonatomic) long long actionsMenuLocation;
@property (nonatomic) bool enableActionsMenuOnPad;
@property (nonatomic) bool enableActionsMenuOnPhone;
@property (nonatomic) bool excludeActionsFromShareSheet;
@property (nonatomic) bool showAddToSharedAlbumAction;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (long long)actionsMenuLocation;
- (bool)enableActionsMenuOnPad;
- (bool)enableActionsMenuOnPhone;
- (bool)excludeActionsFromShareSheet;
- (id)parentSettings;
- (void)setActionsMenuLocation:(long long)arg1;
- (void)setDefaultValues;
- (void)setEnableActionsMenuOnPad:(bool)arg1;
- (void)setEnableActionsMenuOnPhone:(bool)arg1;
- (void)setExcludeActionsFromShareSheet:(bool)arg1;
- (void)setShowAddToSharedAlbumAction:(bool)arg1;
- (bool)showAddToSharedAlbumAction;

@end
