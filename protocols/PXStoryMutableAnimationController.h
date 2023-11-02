
@protocol PXStoryMutableAnimationController <PXStoryMutableController>

@required

- (void)addAnimation:(PXStoryAnimation *)arg1;
- (void)checkInAnimation:(PXStoryAnimation *)arg1;
- (PXStoryAnimation *)checkOutAnimationWithIdentifier:(void *)arg1 creationBlock:(void *)arg2; // needs 2 arg types, found 6: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, PXStoryAnimation *, id /* block */, void*

@end
