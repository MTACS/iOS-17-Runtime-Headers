
@interface ISwatchOSAppRecipe : NSObject <ISCompositorRecipe, ISRecipeOptionalMask, ISSuppliesIconSpecification> {
    bool  shouldApplyMask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) IFIconSpecification *iconSpecification;
@property bool shouldApplyMask;
@property (readonly) Class superclass;

- (id)iconSpecification;
- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (void)setShouldApplyMask:(bool)arg1;
- (bool)shouldApplyMask;

@end
