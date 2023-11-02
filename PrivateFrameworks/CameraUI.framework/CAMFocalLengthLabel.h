
@interface CAMFocalLengthLabel : UIView {
    UIFont * __numeralFont;
    UILabel * __numeralLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  __numeralSize;
    UIFont * __unitFont;
    UILabel * __unitLabel;
    struct CGSize { 
        double width; 
        double height; 
    }  __unitSize;
    long long  _focalLength;
}

@property (nonatomic, retain) UIFont *_numeralFont;
@property (nonatomic, readonly) UILabel *_numeralLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } _numeralSize;
@property (nonatomic, retain) UIFont *_unitFont;
@property (nonatomic, readonly) UILabel *_unitLabel;
@property (nonatomic) struct CGSize { double x1; double x2; } _unitSize;
@property (nonatomic) long long focalLength;

- (void).cxx_destruct;
- (id)_numeralFont;
- (id)_numeralLabel;
- (struct CGSize { double x1; double x2; })_numeralSize;
- (id)_unitFont;
- (id)_unitLabel;
- (struct CGSize { double x1; double x2; })_unitSize;
- (void)_updateFontsAndTextAnimated:(bool)arg1;
- (void)_updateNumeralTextAnimated:(bool)arg1;
- (void)_updateUnitText;
- (long long)focalLength;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setFocalLength:(long long)arg1;
- (void)setFocalLength:(long long)arg1 animated:(bool)arg2;
- (void)set_numeralFont:(id)arg1;
- (void)set_numeralSize:(struct CGSize { double x1; double x2; })arg1;
- (void)set_unitFont:(id)arg1;
- (void)set_unitSize:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;

@end
