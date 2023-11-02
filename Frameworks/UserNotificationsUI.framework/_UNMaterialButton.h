
@interface _UNMaterialButton : UIButton <MTVisualStylingRequiring> {
    NSMutableDictionary * _imageViewStyling;
    NSMutableDictionary * _styling;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *imageViewStyling;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) NSMutableDictionary *styling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyButtonStyling;
- (void)_applyImageViewStyling;
- (void)_applyStyling;
- (void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(bool)arg2;
- (id)imageViewStyling;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)requiredVisualStyleCategories;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageViewStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setImageViewStyling:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setStyle:(long long)arg1 forState:(unsigned long long)arg2;
- (void)setStyling:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)styling;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
