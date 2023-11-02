
@interface PKPassShareEntitlementSelectionViewController : PKPaymentSetupOptionsViewController <PKPassEntitlementSelectionSectionControllerDelegate, PKPassEntitlementTimeSectionControllerDelegate, PKPassShareTimeLimitViewControllerDelegate> {
    PKPassEntitlementsComposer * _entitlementComposer;
    PKPassEntitlementSelectionSectionController * _entitlementSectionController;
    bool  _isShowingMyEntitlements;
    unsigned long long  _mode;
    bool  _showDoneButton;
    PKPassEntitlementTimeSectionController * _timeSectionController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool showDoneButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissButtonPressed;
- (id)_initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 maxEntitlementSelectionCount:(unsigned long long)arg3 isShowingMyEntitlements:(bool)arg4;
- (void)_reloadSections:(bool)arg1;
- (void)didTapPassEntitlementTimeSectionController:(id)arg1;
- (void)entitlementSelectionDidChange;
- (id)initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 maxEntitlementSelectionCount:(unsigned long long)arg3;
- (id)initWithMyEntitlements:(id)arg1;
- (void)loadView;
- (void)setShowDoneButton:(bool)arg1;
- (void)showAdvancedScheduleSelectionFlowForEntitlementEntry:(id)arg1;
- (bool)showDoneButton;
- (void)viewWillAppear:(bool)arg1;

@end
