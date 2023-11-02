
@interface HUTriggerActionEditorContentViewController : HUSelectableServiceGridViewController <HUServiceGridItemManagerDelegate> {
    UINavigationItem * _effectiveNavigationItem;
    NSSet * _existingAnonActionSetMediaProfiles;
    NSSet * _existingSelectedActionSets;
    NSSet * _existingSelectedCharacteristics;
    HUTriggerActionFlow * _flow;
    unsigned long long  _forceDisableReasonsForSecureCharacteristicControl;
    HFTriggerBuilder * _triggerBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UINavigationItem *effectiveNavigationItem;
@property (nonatomic, retain) NSSet *existingAnonActionSetMediaProfiles;
@property (nonatomic, retain) NSSet *existingSelectedActionSets;
@property (nonatomic, retain) NSSet *existingSelectedCharacteristics;
@property (nonatomic, retain) HUTriggerActionFlow *flow;
@property (nonatomic) unsigned long long forceDisableReasonsForSecureCharacteristicControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) HFTriggerBuilder *triggerBuilder;

+ (void)_removeDeletedServiceItems:(id)arg1 fromTriggerBuilder:(id)arg2;

- (void).cxx_destruct;
- (void)_addActionSetItems:(id)arg1 toTriggerBuilder:(id)arg2 inHome:(id)arg3;
- (bool)_canSelectMediaAccessoryItem:(id)arg1;
- (void)_cancel:(id)arg1;
- (void)_goToSummaryScreen:(id)arg1;
- (void)_next:(id)arg1;
- (void)_popAlertWithLocalizedTitle:(id)arg1 localizedMessage:(id)arg2 actions:(id)arg3;
- (void)_presentUnsupportedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)_removeDeletedActionSetsItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (void)_setUpNavButtons;
- (id)_triggerBuilderFuture;
- (unsigned long long)_triggerForceDisableReasonsForActionItem:(id)arg1;
- (void)_updateOrRemoveDeletedMediaItems:(id)arg1 fromTriggerBuilder:(id)arg2;
- (void)_updateSelectedServicesAndActionSets;
- (id)_updateTriggerBuilderActionSets;
- (id)_updateTriggerBuilderAnonymousActions;
- (void)_validateDoneButton;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)didChangeSelection;
- (id)effectiveNavigationItem;
- (id)existingAnonActionSetMediaProfiles;
- (id)existingSelectedActionSets;
- (id)existingSelectedCharacteristics;
- (id)flow;
- (unsigned long long)forceDisableReasonsForSecureCharacteristicControl;
- (void)goToSummaryScreen;
- (id)initWithServiceGridItemManager:(id)arg1;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 effectiveNavigationItem:(id)arg3 delegate:(id)arg4;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (bool)serviceGridItemManager:(id)arg1 shouldHideItem:(id)arg2;
- (void)setExistingAnonActionSetMediaProfiles:(id)arg1;
- (void)setExistingSelectedActionSets:(id)arg1;
- (void)setExistingSelectedCharacteristics:(id)arg1;
- (void)setFlow:(id)arg1;
- (void)setForceDisableReasonsForSecureCharacteristicControl:(unsigned long long)arg1;
- (void)setTriggerBuilder:(id)arg1;
- (id)triggerBuilder;
- (id)triggerBuilderFutureWithLatestUIChanges;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
