
@interface ISGenericRecipe : NSObject <ISCompositorRecipe> {
    unsigned long long  _backgroundStyle;
    unsigned long long  _borderWidth;
    bool  _selectedVariant;
    bool  _templateVariant;
}

@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) unsigned long long borderWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool selectedVariant;
@property (readonly) Class superclass;
@property (nonatomic) bool templateVariant;

- (unsigned long long)backgroundStyle;
- (unsigned long long)borderWidth;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (bool)selectedVariant;
- (void)setBackgroundStyle:(unsigned long long)arg1;
- (void)setBorderWidth:(unsigned long long)arg1;
- (void)setSelectedVariant:(bool)arg1;
- (void)setTemplateVariant:(bool)arg1;
- (bool)templateVariant;

@end
