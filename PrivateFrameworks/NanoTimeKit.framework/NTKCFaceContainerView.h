
@interface NTKCFaceContainerView : UIControl {
    bool  _active;
    UIView * _backgroundView;
    UIView * _faceContainer;
    struct CGSize { 
        double width; 
        double height; 
    }  _faceSize;
    UIView * _faceView;
    UIView * _highlightView;
    CAShapeLayer * _outline;
    long long  _style;
}

@property (nonatomic) bool active;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *faceContainer;
@property (nonatomic) struct CGSize { double x1; double x2; } faceSize;
@property (nonatomic, retain) UIView *faceView;
@property (nonatomic, retain) UIView *highlightView;
@property (nonatomic, retain) CAShapeLayer *outline;
@property (nonatomic) long long style;

+ (double)_insetPaddingForStyle:(long long)arg1;
+ (struct CGSize { double x1; double x2; })faceSizeForSize:(struct CGSize { double x1; double x2; })arg1 style:(long long)arg2;
+ (struct CGSize { double x1; double x2; })sizeForFaceSize:(struct CGSize { double x1; double x2; })arg1 style:(long long)arg2;

- (void).cxx_destruct;
- (double)_outlineLineWidth;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_transformForFaceView;
- (void)_updateOutlineColor;
- (bool)active;
- (id)backgroundView;
- (id)faceContainer;
- (struct CGSize { double x1; double x2; })faceSize;
- (id)faceView;
- (id)highlightView;
- (id)initWithFaceSize:(struct CGSize { double x1; double x2; })arg1 style:(long long)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)outline;
- (void)setActive:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setFaceContainer:(id)arg1;
- (void)setFaceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFaceView:(id)arg1;
- (void)setHighlightView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setOutline:(id)arg1;
- (void)setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)style;
- (void)traitCollectionDidChange:(id)arg1;

@end
