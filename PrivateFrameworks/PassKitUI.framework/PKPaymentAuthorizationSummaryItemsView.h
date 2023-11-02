
@interface PKPaymentAuthorizationSummaryItemsView : UIView {
    NSMutableArray * _hasBottomPadding;
    UIFont * _labelLargeFont;
    UIFont * _labelRegularFont;
    NSMutableArray * _labelViews;
    PKPaymentAuthorizationLayout * _layout;
    bool  _occludesBodyView;
    UIView * _separatorView;
    bool  _showsBoldValueText;
    bool  _showsTopSeparator;
    NSString * _title;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSMutableArray * _titleViews;
    NSMutableArray * _usesLargeFont;
    NSMutableArray * _valueViews;
}

@property (nonatomic) PKPaymentAuthorizationLayout *layout;
@property (nonatomic) bool occludesBodyView;
@property (nonatomic) bool showsBoldValueText;
@property (nonatomic) bool showsTopSeparator;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)_labelAttributedStringWithString:(id)arg1 withDarkColor:(bool)arg2 largeFont:(bool)arg3;
- (id)_valueAttributedStringWithString:(id)arg1 type:(unsigned long long)arg2;
- (void)addLabel:(id)arg1 value:(id)arg2 title:(id)arg3 itemType:(unsigned long long)arg4 maxLabelLines:(long long)arg5 maxValueLines:(long long)arg6 hasBottomPadding:(bool)arg7 useDarkColor:(bool)arg8 useLargeFont:(bool)arg9;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayout:(id)arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)makeTitleLabel;
- (bool)occludesBodyView;
- (void)removeLabelsAndValues;
- (void)setLayout:(id)arg1;
- (void)setOccludesBodyView:(bool)arg1;
- (void)setShowsBoldValueText:(bool)arg1;
- (void)setShowsTopSeparator:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)showsBoldValueText;
- (bool)showsTopSeparator;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 andLayout:(bool)arg2;
- (id)title;
- (id)titleLabel;

@end
