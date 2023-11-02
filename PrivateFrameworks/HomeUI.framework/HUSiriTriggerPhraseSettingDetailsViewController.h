
@interface HUSiriTriggerPhraseSettingDetailsViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUSwitchCellDelegate, UITextViewDelegate> {
    <HUSiriTriggerPhraseSettingDelegate> * _delegate;
    long long  _inProgressTriggerPhraseUpdateIndex;
    long long  _selectedSiriTriggerPhraseIndex;
    HUSiriTriggerPhraseSettingDetailsItemManager * _siriSettingsDetailsItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUSiriTriggerPhraseSettingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long inProgressTriggerPhraseUpdateIndex;
@property (nonatomic) long long selectedSiriTriggerPhraseIndex;
@property (nonatomic, retain) HUSiriTriggerPhraseSettingDetailsItemManager *siriSettingsDetailsItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearSpinner;
- (void)_commonInit;
- (void)_preflightCheckToAllowSwitchingSiriTriggerForMediaItem:(id)arg1 changingToOn:(bool)arg2 withCompletion:(id /* block */)arg3;
- (void)_updateFooterText;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (long long)inProgressTriggerPhraseUpdateIndex;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1;
- (id)initWithAccessorySettingItem:(id)arg1 module:(id)arg2;
- (id)initWithHome:(id)arg1 delegate:(id)arg2;
- (long long)selectedSiriTriggerPhraseIndex;
- (void)setDelegate:(id)arg1;
- (void)setInProgressTriggerPhraseUpdateIndex:(long long)arg1;
- (void)setSelectedSiriTriggerPhraseIndex:(long long)arg1;
- (void)setSiriSettingsDetailsItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)siriSettingsDetailsItemManager;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
