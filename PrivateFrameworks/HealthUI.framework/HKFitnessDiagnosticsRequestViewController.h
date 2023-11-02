
@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController {
    NSString * _baseAutomationIdentifier;
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;

+ (bool)needsRequestedPermission;
+ (void)presentInViewController:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_disableDataCollection;
- (void)_enableDataCollection;
- (void)_showDataCollectionAdditionalInfo;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (bool)shouldInlineButtonTray;
- (void)viewDidLoad;

@end
