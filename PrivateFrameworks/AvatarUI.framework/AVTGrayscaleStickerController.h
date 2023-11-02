
@interface AVTGrayscaleStickerController : NSObject <AVTPoseCaptureViewControllerDelegate, AVTStickerSheetControllerProvider, AVTStickerSheetDelegate> {
    bool  _accessibilityIgnoresInvertColors;
    NSArray * _allowedStickers;
    bool  _allowsPoseCapture;
    UIColor * _backgroundColor;
    <AVTGrayscaleStickerControllerDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    <AVTStickerViewControllerImageDelegate> * _imageDelegate;
    <AVTPresenterDelegate> * _presenterDelegate;
    <AVTStickerSelectionDelegate> * _selectionDelegate;
    bool  _shouldHideUserInfoView;
    bool  _showsSelectionLayerForStickers;
    AVTStickerViewController * _stickerViewController;
    AVTUICapabilities * _uiCapabilities;
    AVTViewSessionProvider * _viewSessionProvider;
}

@property (nonatomic) bool accessibilityIgnoresInvertColors;
@property (nonatomic, retain) NSArray *allowedStickers;
@property (nonatomic) bool allowsPoseCapture;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTGrayscaleStickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AVTStickerViewControllerImageDelegate> *imageDelegate;
@property (nonatomic) <AVTPresenterDelegate> *presenterDelegate;
@property (nonatomic) <AVTStickerSelectionDelegate> *selectionDelegate;
@property (nonatomic) bool shouldHideUserInfoView;
@property (getter=shouldShowSelectionLayerForStickers, nonatomic) bool showsSelectionLayerForStickers;
@property (nonatomic) AVTStickerViewController *stickerViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVTUICapabilities *uiCapabilities;
@property (nonatomic, retain) AVTViewSessionProvider *viewSessionProvider;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)allowedStickers;
- (bool)allowsPoseCapture;
- (id)backgroundColor;
- (id)delegate;
- (id)environment;
- (id)imageDelegate;
- (id)init;
- (void)poseCaptureViewController:(id)arg1 didCapturePoseWithConfiguration:(id)arg2 avatar:(id)arg3;
- (void)poseCaptureViewController:(id)arg1 willCaptureAvatarImage:(id)arg2 completion:(id /* block */)arg3;
- (void)poseCaptureViewControllerDidCancel:(id)arg1;
- (id)presenterDelegate;
- (id)selectionDelegate;
- (void)setAccessibilityIgnoresInvertColors:(bool)arg1;
- (void)setAllowedStickers:(id)arg1;
- (void)setAllowsPoseCapture:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImageDelegate:(id)arg1;
- (void)setPresenterDelegate:(id)arg1;
- (void)setSelectionDelegate:(id)arg1;
- (void)setShouldHideUserInfoView:(bool)arg1;
- (void)setShowsSelectionLayerForStickers:(bool)arg1;
- (void)setStickerViewController:(id)arg1;
- (void)setUiCapabilities:(id)arg1;
- (void)setViewSessionProvider:(id)arg1;
- (bool)shouldHideUserInfoView;
- (bool)shouldShowSelectionLayerForStickers;
- (void)stickerSheetController:(id)arg1 didSelectCameraViewForRecord:(id)arg2;
- (id)stickerSheetControllerForSelectedAvatar:(id)arg1 stickerSheetModel:(id)arg2 taskScheduler:(id)arg3;
- (id)stickerViewController;
- (id)stickerViewControllerForFetchRequest:(id)arg1 allowedStickers:(id)arg2 stickerPacks:(id)arg3 allowPoseCapture:(bool)arg4 showUserInfoView:(bool)arg5 allowEditing:(bool)arg6 backgroundColor:(id)arg7 grayscaleConvertionDelegate:(id)arg8 presenterDelegate:(id)arg9 selectionDelegate:(id)arg10;
- (id)uiCapabilities;
- (id)viewSessionProvider;
- (void)wrapAndPresentViewController:(id)arg1 animated:(bool)arg2;

@end
