
@interface UICollectionViewTableLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    bool  _invalidateTableLayoutDelegateMetrics;
    bool  _skipSectionInvalidation;
}

@property (nonatomic) bool invalidateTableLayoutDelegateMetrics;
@property (nonatomic) bool skipSectionInvalidation;

- (bool)invalidateTableLayoutDelegateMetrics;
- (void)setInvalidateTableLayoutDelegateMetrics:(bool)arg1;
- (void)setSkipSectionInvalidation:(bool)arg1;
- (bool)skipSectionInvalidation;

@end
