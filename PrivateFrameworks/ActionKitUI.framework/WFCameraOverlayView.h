
@interface WFCameraOverlayView : UIView {
    WFCameraFlashButton * _flashButton;
    UIView * _flashView;
    UIButton * _flipButton;
    UILabel * _photosLabel;
    UIImagePickerController * _pickerController;
    WFCameraShutterButton * _shutterButton;
    long long  _takenPhotos;
    long long  _totalPhotos;
    WFVolumeButtonManager * _volumeButtonManager;
}

@property (nonatomic) WFCameraFlashButton *flashButton;
@property (nonatomic) UIView *flashView;
@property (nonatomic) UIButton *flipButton;
@property (nonatomic) UILabel *photosLabel;
@property (nonatomic) UIImagePickerController *pickerController;
@property (nonatomic) WFCameraShutterButton *shutterButton;
@property (nonatomic) long long takenPhotos;
@property (nonatomic) long long totalPhotos;
@property (nonatomic, retain) WFVolumeButtonManager *volumeButtonManager;

- (void).cxx_destruct;
- (void)cancelPressed;
- (id)flashButton;
- (void)flashValueChanged;
- (id)flashView;
- (id)flipButton;
- (void)flipPressed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photosLabel;
- (id)pickerController;
- (void)setFlashButton:(id)arg1;
- (void)setFlashView:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setPhotosLabel:(id)arg1;
- (void)setPickerController:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setTakenPhotos:(long long)arg1;
- (void)setTotalPhotos:(long long)arg1;
- (void)setVolumeButtonManager:(id)arg1;
- (id)shutterButton;
- (void)shutterPressed;
- (long long)takenPhotos;
- (long long)totalPhotos;
- (void)updateButtons;
- (void)updateFlipButton;
- (void)updatePhotosLabel;
- (id)volumeButtonManager;

@end
