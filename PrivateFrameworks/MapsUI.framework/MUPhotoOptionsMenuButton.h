
@interface MUPhotoOptionsMenuButton : UIButton {
    <MUPhotoOptionsMenuButtonDelegate> * _delegate;
}

@property (nonatomic) <MUPhotoOptionsMenuButtonDelegate> *delegate;

+ (unsigned long long)_numberOfSupportedSourceTypes;
+ (bool)_supportsCamera;
+ (bool)_supportsPhotoLibrary;
+ (id)buttonWithDelegate:(id)arg1;
+ (id)menuForPhotoOptionsMenuButtonWithCameraCompletion:(id /* block */)arg1 libraryCompletion:(id /* block */)arg2;
+ (id)menuForPhotoOptionsMenuButtonWithTitle:(id)arg1 symbol:(id)arg2 cameraCompletion:(id /* block */)arg3 libraryCompletion:(id /* block */)arg4;
+ (long long)preferredEntryPoint;

- (void).cxx_destruct;
- (void)_captureUserAction:(int)arg1;
- (void)_didSelectAddFromLibrary;
- (void)_didSelectTakePhoto;
- (void)_didTapOnMenuButton;
- (void)_setActionMenu;
- (void)_setTouchEvent;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
