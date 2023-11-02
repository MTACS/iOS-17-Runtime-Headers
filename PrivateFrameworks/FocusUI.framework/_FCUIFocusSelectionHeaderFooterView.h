
@interface _FCUIFocusSelectionHeaderFooterView : UIView <FCUIContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    UILabel * _label;
    NSString * _preferredContentSizeCategory;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;

+ (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;

- (void).cxx_destruct;
- (id)_attributedTextForText:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (void)_configureLabelIfNecessary;
- (id)_labelFont;
- (void)_layoutLabel:(id)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 measuringOnly:(out struct CGSize { double x1; double x2; }*)arg3;
- (void)_layoutSubviewsInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 measuringOnly:(out struct CGSize { double x1; double x2; }*)arg2;
- (bool)_needsTextAttributesUpdate;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForLabel:(id)arg1;
- (void)_updateTextAttributesIfNecessary;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
