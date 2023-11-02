
@interface HUCameraPermissionsSettingsModule : HUExpandableItemContainerModule <HUCameraSettingsModule> {
    unsigned long long  _displayStyle;
    HFItemProvider * _headerItemProvider;
    HMHome * _home;
    NSSet * _itemProviders;
    NSArray * _userSectionModules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItemProvider *headerItemProvider;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSSet *itemProviders;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *userSectionModules;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (unsigned long long)accessModeSettingForUser:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)didSelectItem:(id)arg1;
- (unsigned long long)displayStyle;
- (id)expandableModules;
- (id)headerItemProvider;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 displayStyle:(unsigned long long)arg3;
- (bool)isItemHeader:(id)arg1;
- (id)itemProviders;
- (void)setHeaderItemProvider:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setUserSectionModules:(id)arg1;
- (id)userSectionModules;

@end
