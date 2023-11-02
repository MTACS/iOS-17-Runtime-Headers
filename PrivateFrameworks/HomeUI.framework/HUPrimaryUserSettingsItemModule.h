
@interface HUPrimaryUserSettingsItemModule : HFItemModule {
    HMHome * _home;
    HFItem * _homePodAccountSelectionItem;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    HUPrimaryUserItemProvider * _primaryUserItemProvider;
    HFItem * _primaryUserSettingsHeaderItem;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HFItem *homePodAccountSelectionItem;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, retain) HUPrimaryUserItemProvider *primaryUserItemProvider;
@property (nonatomic, retain) HFItem *primaryUserSettingsHeaderItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;

+ (id /* block */)_userItemComparator;

- (void).cxx_destruct;
- (void)_buildItemProviders;
- (id)_updatePrimaryUserSelectionType:(unsigned long long)arg1 user:(id)arg2;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)home;
- (id)homePodAccountSelectionItem;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 mediaProfileContainer:(id)arg3;
- (id)itemProviders;
- (id)mediaProfileContainer;
- (id)primaryUserItemProvider;
- (id)primaryUserSettingsHeaderItem;
- (void)setHomePodAccountSelectionItem:(id)arg1;
- (void)setPrimaryUserItemProvider:(id)arg1;
- (void)setPrimaryUserSettingsHeaderItem:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)updatePrimaryUserSelectionType:(unsigned long long)arg1 user:(id)arg2;

@end
