
@protocol PXMutableMessagesStackItemsLayoutHelper <NSObject>

@required

- (double)normalizedContentInsets;
- (NSArray *)normalizedStackHorizontalOffsets;
- (double)normalizedStackSizeTransform;
- (double)normalizedStackVerticalOffset;
- (double)rotationAngle;
- (void)setNormalizedContentInsets:(double)arg1;
- (void)setNormalizedStackHorizontalOffsets:(NSArray *)arg1;
- (void)setNormalizedStackSizeTransform:(double)arg1;
- (void)setNormalizedStackVerticalOffset:(double)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setStackedItemsCount:(unsigned long long)arg1;
- (unsigned long long)stackedItemsCount;

@end
