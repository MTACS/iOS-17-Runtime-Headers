
@interface SFCapsuleCollectionActionView : UIControl {
    UIAction * _action;
    NSLayoutConstraint * _contentEdgeConstraint;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIAction *action;

- (void).cxx_destruct;
- (id)action;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAction:(id)arg1;

@end
