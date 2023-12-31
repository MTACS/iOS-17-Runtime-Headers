
@interface _MKPlacePoisInlineMapContentView : _MKPlaceInlineMapContentView {
    _MKUILabel * _seeMoreLabel;
    _MKUILabel * _storesLabel;
    bool  _visible;
}

@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (bool)hasTitle;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (double)mapViewHeight;
- (void)setLocationsNumber:(unsigned long long)arg1;
- (void)setVisible:(bool)arg1;
- (bool)useImageView;
- (bool)visible;

@end
