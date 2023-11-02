
@interface _TVStackViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateSectionMetrics;
}

@property (nonatomic) bool invalidateSectionMetrics;

- (bool)invalidateSectionMetrics;
- (void)setInvalidateSectionMetrics:(bool)arg1;

@end
