
@interface TPSCallForwardingListController : TPSListController <TPSCallForwardingControllerDelegate> {
    TPSCallForwardingController * _callForwardingController;
    PSSpecifier * _conditionalServiceSwitchSpecifier;
    PSSpecifier * _mainSwitchSpecifier;
}

@property (nonatomic, readonly) TPSCallForwardingController *callForwardingController;
@property (nonatomic, readonly) PSSpecifier *conditionalServiceSwitchSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PSSpecifier *mainSwitchSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callForwardingController;
- (void)callForwardingController:(id)arg1 didChangeServiceType:(long long)arg2;
- (void)callForwardingController:(id)arg1 didChangeValue:(id)arg2 error:(id)arg3;
- (id)conditionalServiceBusyPhoneNumber:(id)arg1;
- (id)conditionalServiceSwitchOn:(id)arg1;
- (id)conditionalServiceSwitchSpecifier;
- (id)conditionalServiceTypeSpecifiers;
- (id)conditionalServiceUnansweredPhoneNumber:(id)arg1;
- (id)conditionalServiceUnreachablePhoneNumber:(id)arg1;
- (void)configureCell:(id)arg1;
- (void)configureCell:(id)arg1 forSpecifier:(id)arg2;
- (id)mainSwitchOn:(id)arg1;
- (id)mainSwitchSpecifier;
- (void)setConditionalServiceBusyPhoneNumber:(id)arg1 specifier:(id)arg2;
- (void)setConditionalServiceSwitchOn:(id)arg1 specifier:(id)arg2;
- (void)setConditionalServiceUnansweredPhoneNumber:(id)arg1 specifier:(id)arg2;
- (void)setConditionalServiceUnreachablePhoneNumber:(id)arg1 specifier:(id)arg2;
- (void)setMainSwitchOn:(id)arg1 specifier:(id)arg2;
- (void)setUnconditionalServicePhoneNumber:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)unconditionalServicePhoneNumber:(id)arg1;
- (id)unconditionalServiceTypeSpecifiers;

@end
