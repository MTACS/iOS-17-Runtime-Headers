
@interface MPAVClippingTableViewCell : UITableViewCell {
    UIView * _bottomSeparatorView;
    UIView * _clippingContentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _clippingInsets;
    UIView * _clippingMaskView;
    bool  _shouldHideSectionBottomSeparator;
    UIView * _topSeparatorView;
}

@property (nonatomic, readonly) UIView *bottomSeparatorView;
@property (nonatomic, retain) UIView *clippingContentView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } clippingInsets;
@property (nonatomic, retain) UIView *clippingMaskView;
@property (nonatomic) bool shouldHideSectionBottomSeparator;
@property (nonatomic, readonly) UIView *topSeparatorView;

- (void).cxx_destruct;
- (void)_setShouldHaveFullLengthBottomSeparator:(bool)arg1;
- (void)_setShouldHaveFullLengthTopSeparator:(bool)arg1;
- (id)bottomSeparatorView;
- (id)clippingContentView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })clippingInsets;
- (id)clippingMaskView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAccessoryView:(id)arg1;
- (void)setClippingContentView:(id)arg1;
- (void)setClippingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setClippingMaskView:(id)arg1;
- (void)setShouldHideSectionBottomSeparator:(bool)arg1;
- (bool)shouldHideSectionBottomSeparator;
- (id)topSeparatorView;

@end
