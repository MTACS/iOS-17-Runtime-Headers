
@interface UICollectionViewFlowLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    struct { 
        unsigned int invalidateDelegateMetrics : 1; 
        unsigned int invalidateAttributes : 1; 
    }  _flowLayoutInvalidationFlags;
}

@property (nonatomic) bool invalidateFlowLayoutAttributes;
@property (nonatomic) bool invalidateFlowLayoutDelegateMetrics;

- (id)init;
- (bool)invalidateFlowLayoutAttributes;
- (bool)invalidateFlowLayoutDelegateMetrics;
- (void)setInvalidateFlowLayoutAttributes:(bool)arg1;
- (void)setInvalidateFlowLayoutDelegateMetrics:(bool)arg1;

@end
