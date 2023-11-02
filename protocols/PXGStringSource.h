
@protocol PXGStringSource <PXGLayoutContentSource>

@required

- (NSAttributedString *)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSString *)stringAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSDictionary *)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;

@optional

- (struct CGSize { double x1; double x2; })attributedStringBoundingSizeForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (NSStringDrawingContext *)drawingContextForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;
- (long long)stringDrawingOptionsForSpriteAtIndex:(unsigned int)arg1 inLayout:(PXGLayout *)arg2;

@end
