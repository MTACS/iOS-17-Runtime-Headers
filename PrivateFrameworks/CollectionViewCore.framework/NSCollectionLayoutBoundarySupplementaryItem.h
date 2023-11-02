
@interface NSCollectionLayoutBoundarySupplementaryItem : NSCollectionLayoutSupplementaryItem <NSCopying> {
    long long  _alignment;
    bool  _extendsBoundary;
    struct CGPoint { 
        double x; 
        double y; 
    }  _offset;
    bool  _pinToVisibleBounds;
    long long  _pinningZIndex;
}

@property (getter=_pinningZIndex, setter=_setPinningZIndex:, nonatomic) long long _pinningZIndex;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic) bool extendsBoundary;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic) bool pinToVisibleBounds;

+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3;
+ (id)boundarySupplementaryItemWithLayoutSize:(id)arg1 elementKind:(id)arg2 alignment:(long long)arg3 absoluteOffset:(struct CGPoint { double x1; double x2; })arg4;
+ (id)itemWithLayoutSize:(id)arg1;
+ (id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2;

- (long long)_pinningZIndex;
- (void)_setPinningZIndex:(long long)arg1;
- (long long)alignment;
- (id)boundarySupplementaryItem;
- (id)copyWithContainerAnchor:(id)arg1 itemAnchor:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)extendsBoundary;
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg2 elementKind:(id)arg3 containerAnchor:(id)arg4 itemAnchor:(id)arg5 zIndex:(long long)arg6 alignment:(long long)arg7 offset:(struct CGPoint { double x1; double x2; })arg8 extendsBoundary:(bool)arg9 pinToVisibleBounds:(bool)arg10;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (bool)pinToVisibleBounds;
- (void)setExtendsBoundary:(bool)arg1;
- (void)setPinToVisibleBounds:(bool)arg1;
- (void)setPinningZIndex:(long long)arg1;

@end
