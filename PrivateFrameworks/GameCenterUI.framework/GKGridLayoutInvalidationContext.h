
@interface GKGridLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateBoundsChange;
    bool  _invalidateIncrementalReveal;
    bool  _invalidatePinnableAreas;
    bool  _invalidatePlaceholderVisibility;
}

@property (nonatomic) bool invalidateBoundsChange;
@property (nonatomic) bool invalidateIncrementalReveal;
@property (nonatomic) bool invalidatePinnableAreas;
@property (nonatomic) bool invalidatePlaceholderVisibility;

- (bool)invalidateBoundsChange;
- (bool)invalidateIncrementalReveal;
- (bool)invalidatePinnableAreas;
- (bool)invalidatePlaceholderVisibility;
- (void)setInvalidateBoundsChange:(bool)arg1;
- (void)setInvalidateIncrementalReveal:(bool)arg1;
- (void)setInvalidatePinnableAreas:(bool)arg1;
- (void)setInvalidatePlaceholderVisibility:(bool)arg1;

@end
