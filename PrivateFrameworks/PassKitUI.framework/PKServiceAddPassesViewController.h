
@interface PKServiceAddPassesViewController : PKNavigationController <PKAddPassesCardStackViewControllerDelegate, PKIssuerBindingViewControllerDelegate, PKServiceAddPassesViewControllerProtocol> {
    PKAddPassesCardStackViewController * _cardStackViewController;
    PKIssuerBindingViewController * _issuerBindingViewController;
    bool  _placeholderViewControllerDidCancel;
    <PKServiceAddPassesViewControllerResultsDelegate> * _resultsDelegate;
    double  _screenScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _screenSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PKServiceAddPassesViewControllerResultsDelegate> *resultsDelegate;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_preventsAppearanceProxyCustomization;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_dismissDelayed;
- (void)_ingestionDidFinishWithResult:(unsigned long long)arg1;
- (void)_setupCardStackViewControllerWithPassDataArray:(id)arg1 orPassesContainer:(id)arg2 fromPresentationSource:(unsigned long long)arg3 shouldPushController:(bool)arg4;
- (void)_setupIssuerBindingViewControllerWithData:(id)arg1 signature:(id)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didCancelAddingPasses:(id)arg2;
- (void)addPassesCardStackViewController:(id)arg1 didFinishAddingPasses:(id)arg2;
- (void)evaluateBrightness;
- (void)ingestPasses:(id)arg1 orPassesContainer:(id)arg2 orIssuerData:(id)arg3 withSignature:(id)arg4 fromPresentationSource:(unsigned long long)arg5;
- (id)init;
- (void)issuerBindingViewController:(id)arg1 didFinishWithPassesData:(id)arg2;
- (void)issuerBindingViewControllerDidCancel:(id)arg1;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)resetBrightness;
- (id)resultsDelegate;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setResultsDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
