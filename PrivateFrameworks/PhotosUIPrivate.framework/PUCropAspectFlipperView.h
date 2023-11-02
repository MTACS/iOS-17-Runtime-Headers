
@interface PUCropAspectFlipperView : UIView {
    long long  _aspectRatioOrientation;
    <PUCropAspectViewControllerDelegate> * _delegate;
    bool  _enabled;
    UIButton * _horizontalAspectButton;
    NSArray * _layoutConstraints;
    long long  _layoutOrientation;
    UIButton * _verticalAspectButton;
}

@property (nonatomic) long long aspectRatioOrientation;
@property (nonatomic) <PUCropAspectViewControllerDelegate> *delegate;
@property (nonatomic) bool enabled;
@property (nonatomic) long long layoutOrientation;

- (void).cxx_destruct;
- (void)aspectRatioButtonPressed:(id)arg1;
- (long long)aspectRatioOrientation;
- (id)delegate;
- (bool)enabled;
- (id)initWithLayoutOrientation:(long long)arg1;
- (long long)layoutOrientation;
- (void)setAspectRatioOrientation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLayoutOrientation:(long long)arg1;

@end
