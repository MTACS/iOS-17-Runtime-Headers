
@interface UIKBSplitImageView : UIView {
    bool  _canStretchAsFullWidth;
    NSString * _currentFilterType;
    UIImageView * _fullView;
    NSLayoutConstraint * _leftWidthConstraint;
    NSLayoutConstraint * _rightWidthConstraint;
    NSArray * _splitConstraints;
    UIImageView * _splitLeft;
    UIImageView * _splitRight;
}

@property (nonatomic, retain) NSString *filterType;

- (void).cxx_destruct;
- (bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)clearImages;
- (id)filterType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 canStretchAsFullWidth:(bool)arg2;
- (void)insertSubviewAtBottom:(id)arg1;
- (void)prepareForDisplay:(bool)arg1;
- (void)setContentsMultiplyColor:(id)arg1;
- (void)setFilterType:(id)arg1;
- (void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3;
- (void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4;

@end
