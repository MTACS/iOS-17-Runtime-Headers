
@interface PUHorizontalCollectionViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateCachedLayout;
}

@property (setter=_setInvalidateCachedLayout:, nonatomic) bool invalidateCachedLayout;

- (void)_setInvalidateCachedLayout:(bool)arg1;
- (bool)invalidateCachedLayout;

@end
