
@interface AVMobileVolumeChromelessButtonControl : UIControl <UIPointerInteractionDelegate> {
    <AVMobileVolumeChromlesButtonControlDelegate> * _delegate;
    bool  _hasStartedPanning;
    UIImageView * _imageView;
    AVMicaPackage * _micaPackage;
    UIPointerInteraction * _micaPackageContainerPointerInteraction;
    UIView * _micaPackageContainerView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startPoint;
    NSString * _volumeIconState;
}

@property (readonly, copy) NSString *debugDescription;
@property <AVMobileVolumeChromlesButtonControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) AVMicaPackage *micaPackage;
@property (nonatomic, retain) UIView *micaPackageContainerView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *volumeIconState;

- (void).cxx_destruct;
- (id)_imageNameForMicaPackageState;
- (void)_updateMicaPackage:(id)arg1;
- (void)_volumeControlButtonDidBeginPanning;
- (void)_volumeControlButtonDidEndPanning;
- (void)_volumeControlButtonPanningDidContinueWithXDelta:(double)arg1;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)delegate;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)imageView;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)micaPackage;
- (id)micaPackageContainerView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMicaPackage:(id)arg1;
- (void)setMicaPackageContainerView:(id)arg1;
- (void)setVolumeIconState:(id)arg1;
- (id)volumeIconState;

@end
