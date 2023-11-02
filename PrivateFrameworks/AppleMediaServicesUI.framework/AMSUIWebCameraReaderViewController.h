
@interface AMSUIWebCameraReaderViewController : AMSUICommonViewController <AMSUIWebPagePresenter, CRCameraReaderDelegate, CRCodeRedeemerControllerDelegate, UITextFieldDelegate> {
    AMSUIWebAppearance * _appearance;
    UIViewController * _childController;
    AMSUIWebClientContext * _context;
    AMSUIWebCameraReaderInfoView * _infoView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardRect;
    AMSUIWebCameraReaderPageModel * _model;
    AMSUIWebNavigationBarModel * _navigationBarModel;
    NSDictionary * _output;
    UIView * _overlay;
    AMSUIWebCameraTextField * _textField;
    UIView * _textFieldSafeAreaBackdrop;
}

@property (nonatomic, retain) AMSUIWebAppearance *appearance;
@property (nonatomic, retain) UIViewController *childController;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSUIWebCameraReaderInfoView *infoView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardRect;
@property (nonatomic, retain) AMSUIWebCameraReaderPageModel *model;
@property (nonatomic, retain) AMSUIWebNavigationBarModel *navigationBarModel;
@property (nonatomic, retain) NSDictionary *output;
@property (nonatomic, retain) UIView *overlay;
@property (readonly) Class superclass;
@property (nonatomic, retain) AMSUIWebCameraTextField *textField;
@property (nonatomic, retain) UIView *textFieldSafeAreaBackdrop;

+ (bool)cameraSupported;

- (void).cxx_destruct;
- (void)_applyAppearance;
- (id)_cameraReader;
- (void)_commitNavigationBarModel;
- (void)_handleCameraOutput:(id)arg1 error:(id)arg2;
- (void)_hideKeyboard;
- (void)_layoutFullScreen;
- (void)_layoutHalfScreen;
- (void)_layoutPage;
- (void)_layoutTextField;
- (id)_makeTextFieldWithPlaceholderColor:(id)arg1;
- (id)_outputForCreditCardReaderObjects:(id)arg1;
- (id)_outputForGiftCardReaderCode:(id)arg1;
- (id)_outputForGiftCardReaderObjects:(id)arg1;
- (id)_outputForIDCardReaderObjects:(id)arg1;
- (void)_overlayTapGestureAction:(id)arg1;
- (void)_redeemAction;
- (void)_setCameraToggleButton;
- (void)_setCancelButton;
- (void)_setChild:(id)arg1;
- (void)_setRedeemButton;
- (void)_setupCameraToggle;
- (void)_setupInfoView;
- (void)_setupNavigationModel;
- (void)_setupPage;
- (void)_setupPageForCreditCard;
- (void)_setupPageForGiftCard;
- (void)_setupPageForIDCard;
- (void)_setupTextEntry;
- (id)appearance;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (id)childController;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)infoView;
- (id)initWithContext:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardRect;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (id)model;
- (id)navigationBarModel;
- (id)output;
- (id)overlay;
- (void)setAppearance:(id)arg1;
- (void)setChildController:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void)setKeyboardRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setModel:(id)arg1;
- (void)setNavigationBarModel:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setOverlay:(id)arg1;
- (void)setTextField:(id)arg1;
- (void)setTextFieldSafeAreaBackdrop:(id)arg1;
- (id)textField;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (id)textFieldSafeAreaBackdrop;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willPresentPageModel:(id)arg1 appearance:(id)arg2;

@end
