
@interface TVShelfViewLayoutInvalidationContext : UICollectionViewLayoutInvalidationContext {
    NSIndexPath * _focusedItemIndexPath;
    bool  _invalidateLayout;
    bool  _invalidateVerticalBumps;
}

@property (nonatomic, retain) NSIndexPath *focusedItemIndexPath;
@property (nonatomic) bool invalidateLayout;
@property (nonatomic) bool invalidateVerticalBumps;

- (void).cxx_destruct;
- (id)focusedItemIndexPath;
- (bool)invalidateLayout;
- (bool)invalidateVerticalBumps;
- (void)setFocusedItemIndexPath:(id)arg1;
- (void)setInvalidateLayout:(bool)arg1;
- (void)setInvalidateVerticalBumps:(bool)arg1;

@end
