
@protocol PXGItemsLayoutDelegate <NSObject>

@optional

- (double)itemsLayout:(PXGItemsLayout *)arg1 aspectRatioForItem:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemsLayout:(PXGItemsLayout *)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })itemsLayout:(PXGItemsLayout *)arg1 cornerRadiusForItem:(long long)arg2;
- (unsigned int)itemsLayout:(PXGItemsLayout *)arg1 effectIdForItem:(long long)arg2;
- (struct CGSize { double x1; double x2; })itemsLayout:(PXGItemsLayout *)arg1 insetForItem:(long long)arg2;
- (long long)itemsLayout:(PXGItemsLayout *)arg1 itemForObjectReference:(id)arg2 options:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })itemsLayout:(PXGItemsLayout *)arg1 marginForItem:(long long)arg2;
- (id)itemsLayout:(PXGItemsLayout *)arg1 objectReferenceForAccessoryItem:(long long)arg2;
- (id)itemsLayout:(PXGItemsLayout *)arg1 objectReferenceForItem:(long long)arg2;
- (double)itemsLayout:(PXGItemsLayout *)arg1 rotationAngleForItem:(long long)arg2;
- (void)itemsLayout:(PXGItemsLayout *)arg1 updateTagsInSpriteInfos:(struct { unsigned char x1; unsigned char x2; float x3; long long x4; unsigned short x5; unsigned char x6; }*)arg2 forItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
