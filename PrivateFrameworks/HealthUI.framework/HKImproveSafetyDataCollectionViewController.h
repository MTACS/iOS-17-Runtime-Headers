
@interface HKImproveSafetyDataCollectionViewController : OBTextWelcomeController {
    NSString * _baseAutomationIdentifier;
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;

+ (id)localizedStringWithKey:(id)arg1;
+ (bool)needsRequestedPermission;
+ (void)presentInViewController:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_disableDataCollection;
- (void)_enableDataCollection;
- (void)_setDataCollectionToNewValue:(bool)arg1;
- (void)_showDataCollectionAdditionalInfo;
- (id /* block */)completion;
- (id)localizedStringWithKey:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setUpButtons;
- (void)setUpContent;
- (bool)shouldInlineButtonTray;
- (void)viewDidLoad;

@end
