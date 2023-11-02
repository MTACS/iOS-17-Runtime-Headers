
@protocol PXGGeneratedLayoutDelegate <PXGItemsLayoutDelegate>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })generatedLayout:(PXGGeneratedLayout *)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (<PXLayoutItemInput> *)generatedLayout:(PXGGeneratedLayout *)arg1 inputItemAtIndex:(unsigned int)arg2;
- (id)generatedLayout:(PXGGeneratedLayout *)arg1 objectReferenceAtIndex:(unsigned int)arg2;

@end
