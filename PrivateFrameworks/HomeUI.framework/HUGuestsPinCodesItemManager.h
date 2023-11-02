
@interface HUGuestsPinCodesItemManager : HFItemManager {
    HFPinCodeManager * _pinCodeManager;
}

@property (nonatomic, retain) HFPinCodeManager *pinCodeManager;

- (void).cxx_destruct;
- (id)_buildItemModulesForHome:(id)arg1;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithPinCodeManager:(id)arg1 delegate:(id)arg2;
- (id)pinCodeManager;
- (void)setPinCodeManager:(id)arg1;

@end
