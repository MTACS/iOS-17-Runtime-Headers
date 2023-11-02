
@interface HUGuestsPinCodesViewController : HUItemTableViewController <HFPinCodeManagerObserver, HUPresentationDelegate> {
    HFPinCodeManager * _pinCodeManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (void)hideSpinner;
- (id)initWithPinCodeManager:(id)arg1;
- (id)pinCodeManager;
- (void)setPinCodeManager:(id)arg1;
- (void)showSpinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
