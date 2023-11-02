
@interface SUUIRedeemCameraViewController : SUUIRedeemStepViewController <CRCodeRedeemerControllerDelegate, SUUIRedeemCameraViewControllerDelegate, SUUIRedeemCameraViewDelegate> {
    UIBarButtonItem * _activityBarButtonItem;
    bool  _alreadyPushed;
    CRCodeRedeemerController * _camera;
    <SUUIRedeemViewCameraOverrideDelegate> * _cameraOverrideDelegate;
    long long  _category;
    <SUUIRedeemCameraViewControllerDelegate> * _delegate;
    UIBarButtonItem * _flipButton;
    bool  _fullscreen;
    NSString * _initialCode;
    UIBarButtonItem * _redeemButton;
    SUUIRedeem * _successfulRedeem;
}

@property (nonatomic) <SUUIRedeemViewCameraOverrideDelegate> *cameraOverrideDelegate;
@property (nonatomic, readonly) long long category;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIRedeemCameraViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *initialCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)SUUIRedeemCameraView:(id)arg1 textFieldDidChange:(id)arg2;
- (void)SUUIRedeemCameraView:(id)arg1 textFieldDidRedeem:(id)arg2;
- (void)SUUIRedeemPreflightImagesDidLoad:(id)arg1;
- (void)_cameraRedeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_cancelAction:(id)arg1;
- (bool)_enabled;
- (void)_flipAction:(id)arg1;
- (void)_performRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 allowOverride:(bool)arg3 completion:(id /* block */)arg4;
- (void)_redeemAction:(id)arg1;
- (void)_redeemDidFinish:(id)arg1 error:(id)arg2;
- (void)_setEnabled:(bool)arg1;
- (void)_updateRightBarButtonItemsForRedeemInputState:(long long)arg1;
- (id)cameraOverrideDelegate;
- (void)cancelRedeemerViewForSUUIRedeemCameraView:(id)arg1;
- (long long)category;
- (void)codeRedeemerController:(id)arg1 didEndWithInfo:(id)arg2;
- (void)codeRedeemerControllerDidCancel:(id)arg1;
- (void)codeRedeemerControllerDidDisplayMessage:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)delegate;
- (bool)disablesAutomaticKeyboardDismissal;
- (id)initWithRedeemCategory:(long long)arg1;
- (id)initWithRedeemCategoryFullscreen:(long long)arg1;
- (id)initialCode;
- (void)loadView;
- (void)performRedeemOperationWithCode:(id)arg1 cameraRecognized:(bool)arg2 completion:(id /* block */)arg3;
- (void)presentFullScreenCameraViewForSUUIRedeemCameraView:(id)arg1;
- (void)redeemCameraViewController:(id)arg1 didFinishWithRedeem:(id)arg2;
- (id)redeemerViewForSUUIRedeemCameraView:(id)arg1;
- (void)setCameraOverrideDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInitialCode:(id)arg1;
- (void)showITunesPassLearnMoreForSUUIRedeemCameraView:(id)arg1;
- (void)startRedeemerViewForSUUIRedeemCameraView:(id)arg1;

@end
