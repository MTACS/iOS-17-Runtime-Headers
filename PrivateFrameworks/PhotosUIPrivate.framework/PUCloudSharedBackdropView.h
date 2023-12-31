
@interface PUCloudSharedBackdropView : UIView {
    UIView * _backdropView;
    bool  _hasRoundedCorners;
    bool  _isMask;
}

@property (nonatomic) bool hasRoundedCorners;

- (void).cxx_destruct;
- (bool)hasRoundedCorners;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 asMask:(bool)arg2;
- (void)layoutSubviews;
- (void)setHasRoundedCorners:(bool)arg1;

@end
