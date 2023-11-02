
@protocol NSMergeableTransformableAttributeValue <NSObject>

@required

+ (bool)supportsMergeableTransformable;

- (id)computedValue;
- (void)merge:(id <NSMergeableTransformableAttributeValue>)arg1;

@end
