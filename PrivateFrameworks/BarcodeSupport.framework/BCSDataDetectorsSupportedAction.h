
@interface BCSDataDetectorsSupportedAction : BCSAction <BCSActionDelegate> {
    NSArray * _actions;
    CNContact * _contact;
    UIMenu * _ddUIMenu;
    DDUIAction * _defaultDDAction;
    NSString * _icsString;
    DDScannerResult * _scannerResult;
}

@property (nonatomic, readonly, copy) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *icsString;
@property (nonatomic, readonly) DDScannerResult *scannerResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionStringsArray;
- (id)_hostingViewForAction;
- (void)_performActionAndShowActionPickerIfNeeded:(bool)arg1;
- (void)_setUpActionMenuIfNeeded;
- (id)actionIcon;
- (id)actionPickerItems;
- (id)contact;
- (id)contentPreviewString;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (id)icsString;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (id)localizedActionDescription;
- (id)localizedDefaultActionDescription;
- (id)menuElements;
- (unsigned long long)menuElementsCount;
- (void)performAction;
- (void)performDefaultAction;
- (bool)preferItemsInSubmenu;
- (id)scannerResult;
- (id)shortDescription;
- (id)url;

@end
