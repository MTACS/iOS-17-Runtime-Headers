
@interface PKPassShareTimeLimitViewController : PKPaymentSetupOptionsViewController <PKPassShareScheduleSectionControllerDelegate, PKPassShareToggleSectionControllerDelegate> {
    PKPassShareToggleSectionController * _advancedScheduleSectionController;
    <PKPassShareTimeLimitViewControllerDelegate> * _delegate;
    PKPassShareToggleSectionController * _entitlementAccessSectionController;
    PKPassEntitlementsComposer * _entitlementComposer;
    PKPassEntitlementsComposerEntry * _entitlementEntry;
    unsigned long long  _mode;
    PKPassShareScheduleSectionController * _scheduleSectionController;
}

- (void).cxx_destruct;
- (void)_configureSections;
- (void)_showTimeLimitEditForStartDate:(bool)arg1 expirationDate:(bool)arg2;
- (void)didSelectEditEndDate;
- (void)didSelectEditStartDate;
- (id)initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 entitlementEntry:(id)arg3 delegate:(id)arg4;
- (void)timeConfigurationDidChange:(id)arg1;
- (void)toggle:(id)arg1 valueDidChange:(bool)arg2;
- (void)viewDidLoad;

@end
