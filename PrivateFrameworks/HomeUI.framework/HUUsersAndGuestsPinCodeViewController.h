
@interface HUUsersAndGuestsPinCodeViewController : HUItemTableViewController <HFPinCodeManagerObserver, HUPresentationDelegate> {
    HFPinCodeManager * _pinCodeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (void)hideSpinner;
- (id)initWithSourceItem:(id)arg1 pinCodeManager:(id)arg2 home:(id)arg3 forAccessory:(id)arg4;
- (id)pinCodeManager;
- (void)setPinCodeManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)showSpinner;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end
