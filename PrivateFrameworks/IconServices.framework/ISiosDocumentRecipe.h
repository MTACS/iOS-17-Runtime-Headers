
@interface ISiosDocumentRecipe : NSObject <ISCompositorRecipe, ISSuppliesIconSpecification> {
    unsigned long long  _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) IFIconSpecification *iconSpecification;
@property (nonatomic) unsigned long long options;
@property (readonly) Class superclass;

- (struct CGSize { double x1; double x2; })backgroundSizeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (struct CGSize { double x1; double x2; })badgeSizeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)iconSpecification;
- (id)init;
- (id)layerTreeForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;

@end
