
@interface SKBackgroundAssetConsentViewController : OBWelcomeController {
    id /* block */  _responseBlock;
}

@property (nonatomic, copy) id /* block */ responseBlock;

- (void).cxx_destruct;
- (void)_continueButtonPressed;
- (void)dealloc;
- (id)init;
- (bool)isModalInPresentation;
- (long long)modalPresentationStyle;
- (id /* block */)responseBlock;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)viewDidLoad;

@end
