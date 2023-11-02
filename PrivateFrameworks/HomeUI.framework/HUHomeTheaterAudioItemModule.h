
@interface HUHomeTheaterAudioItemModule : HFItemModule {
    <HUHomeTheaterAudioItemModuleAlertDelegate> * _alertDelegate;
    bool  _disableAutomaticCommit;
    bool  _includeLocalDestinations;
    NSSet * _itemProviders;
    <HFMediaProfileContainer> * _mediaProfileContainer;
    <HUHomeTheaterAudioItemModuleOnboardingDelegate> * _onboardingDelegate;
    HFItem * _selectedUncommittedItem;
    NSString * _tappedDestinationIdentifier;
}

@property (nonatomic) <HUHomeTheaterAudioItemModuleAlertDelegate> *alertDelegate;
@property (nonatomic) bool disableAutomaticCommit;
@property (nonatomic, readonly) bool includeLocalDestinations;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic) <HUHomeTheaterAudioItemModuleOnboardingDelegate> *onboardingDelegate;
@property (nonatomic, readonly) HFItem *selectedUncommittedItem;
@property (nonatomic, retain) NSString *tappedDestinationIdentifier;

- (void).cxx_destruct;
- (void)_createItemProviders;
- (void)_selectItem:(id)arg1;
- (id)_updateDestinationToIdentifier:(id)arg1;
- (id)alertDelegate;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)commitConfiguration;
- (bool)disableAutomaticCommit;
- (bool)includeLocalDestinations;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2 includeLocalDestinations:(bool)arg3;
- (id)itemProviders;
- (id)mediaProfileContainer;
- (id)onboardingDelegate;
- (void)selectItem:(id)arg1;
- (id)selectedUncommittedItem;
- (void)setAlertDelegate:(id)arg1;
- (void)setDisableAutomaticCommit:(bool)arg1;
- (void)setOnboardingDelegate:(id)arg1;
- (void)setTappedDestinationIdentifier:(id)arg1;
- (id)tappedDestinationIdentifier;

@end
