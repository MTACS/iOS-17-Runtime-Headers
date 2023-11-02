
@interface _UICollectionViewListAccessoryDisclosureButtonView : UIView <_UICollectionViewListAccessoryDisclosureView> {
    UIColor * _accessoryTintColor;
    id /* block */  _actionHandler;
    UIButton * _button;
    <UITableConstants> * _constants;
    UIImage * _image;
    UIImageView * _imageView;
    bool  _rotated;
    double  _rotationAngle;
}

@property (nonatomic, retain) UIColor *accessoryTintColor;
@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, retain) <UITableConstants> *constants;
@property (nonatomic, readonly) UIControl *control;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool rotated;
@property (nonatomic) double rotationAngle;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_executeActionHandler;
- (void)_updateRotation;
- (id)accessoryTintColor;
- (id /* block */)actionHandler;
- (id)constants;
- (id)control;
- (id)image;
- (id)initWithConstants:(id)arg1;
- (void)layoutSubviews;
- (bool)rotated;
- (double)rotationAngle;
- (void)setAccessoryTintColor:(id)arg1;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setConstants:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setRotated:(bool)arg1;
- (void)setRotationAngle:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
