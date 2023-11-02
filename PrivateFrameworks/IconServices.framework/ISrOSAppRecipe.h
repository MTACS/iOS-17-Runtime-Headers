
@interface ISrOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISSuppliesIconSpecification> {
    bool  _templateVariant;
    bool  shouldApplyMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) IFIconSpecification *iconSpecification;
@property bool shouldApplyMask;
@property (readonly) Class superclass;
@property (nonatomic) bool templateVariant;

- (id)iconSpecification;
- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setShouldApplyMask:(bool)arg1;
- (void)setTemplateVariant:(bool)arg1;
- (bool)shouldApplyMask;
- (bool)templateVariant;

@end
