
@interface NCNotificationListBaseContentView : UIView <MTVisualStylingProviding, MTVisualStylingRequiring, PLContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    NSStringDrawingContext * _drawingContext;
    NSString * _preferredContentSizeCategory;
    MTVisualStylingProvider * _strokeVisualStylingProvider;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_numberOfLinesForLabel:(id)arg1 maximumNumberOfLines:(unsigned long long)arg2 inFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;
- (double)_sizeMeasuringHeightForLabel:(id)arg1 withNumberOfLines:(unsigned long long)arg2;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForLabel:(id)arg1 withTextStyle:(id)arg2 fontWeight:(double)arg3 additionalTraits:(unsigned int)arg4 maximumNumberOfLines:(unsigned long long)arg5;
- (void)_updateVisualStylingOfImageView:(id)arg1 ifSymbolImageWithStyle:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_visualStylingProviderDidChange:(id)arg1 forCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preferredContentSizeCategory;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
