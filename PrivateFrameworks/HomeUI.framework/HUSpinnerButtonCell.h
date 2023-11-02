
@interface HUSpinnerButtonCell : HUButtonCell {
    bool  _showSpinner;
    UIActivityIndicatorView * _spinner;
    bool  _useFullWidthSeparator;
}

@property (nonatomic) bool showSpinner;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (nonatomic) bool useFullWidthSeparator;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)createSpinner;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)setShowSpinner:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)setUseFullWidthSeparator:(bool)arg1;
- (bool)showSpinner;
- (id)spinner;
- (bool)useFullWidthSeparator;

@end
