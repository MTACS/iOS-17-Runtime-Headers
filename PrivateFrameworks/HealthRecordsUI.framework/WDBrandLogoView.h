
@interface WDBrandLogoView : UIImageView {
    WDCancellationToken * _cancellationToken;
    bool  _isFallback;
    double  _size;
}

@property (nonatomic, retain) WDCancellationToken *cancellationToken;
@property (nonatomic) bool isFallback;
@property (nonatomic) double size;

- (void).cxx_destruct;
- (void)_updateStyle;
- (id)cancellationToken;
- (void)fetchBrandable:(id)arg1 dataProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSize:(double)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isFallback;
- (void)prepareForReuse;
- (void)setCancellationToken:(id)arg1;
- (void)setIsFallback:(bool)arg1;
- (void)setSize:(double)arg1;
- (double)size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
