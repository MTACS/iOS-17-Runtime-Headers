
@interface CEKWheelScrubberCollectionViewLayout : UICollectionViewLayout {
    struct CGSize { 
        double width; 
        double height; 
    }  __cachedContentSize;
    NSArray * __cachedLayoutAttributesCells;
    NSArray * __cachedLayoutAttributesDecorations;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInsets;
    long long  _layoutDirection;
    long long  _layoutOrder;
    bool  _useRoundedCorners;
    <CEKWheelScrubberCollectionViewLayoutDelegate> * _wheelScrubberDelegate;
}

@property (setter=_setCachedContentSize:, nonatomic) struct CGSize { double x1; double x2; } _cachedContentSize;
@property (setter=_setCachedLayoutAttributesCells:, nonatomic, retain) NSArray *_cachedLayoutAttributesCells;
@property (setter=_setCachedLayoutAttributesDecorations:, nonatomic, retain) NSArray *_cachedLayoutAttributesDecorations;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInsets;
@property (nonatomic) long long layoutDirection;
@property (nonatomic) long long layoutOrder;
@property (nonatomic) bool useRoundedCorners;
@property (nonatomic) <CEKWheelScrubberCollectionViewLayoutDelegate> *wheelScrubberDelegate;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_cachedContentSize;
- (id)_cachedLayoutAttributesCells;
- (id)_cachedLayoutAttributesDecorations;
- (double)_circularlyWrapped:(double)arg1 forCenter:(double)arg2 radius:(double)arg3 scale:(double)arg4;
- (void)_setCachedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_setCachedLayoutAttributesCells:(id)arg1;
- (void)_setCachedLayoutAttributesDecorations:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)layoutDirection;
- (long long)layoutOrder;
- (void)prepareLayout;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setLayoutOrder:(long long)arg1;
- (void)setUseRoundedCorners:(bool)arg1;
- (void)setWheelScrubberDelegate:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)useRoundedCorners;
- (id)wheelScrubberDelegate;

@end
