
@interface AVTEngagementLayout : NSObject <AVTCollectionViewLayout> {
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultCellSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _engagedCellSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _engagementBoundsInsets;
    id /* block */  _interItemSpacingProvider;
    bool  _useEngagementSpacing;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultCellSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } engagedCellSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } engagementBoundsInsets;
@property (nonatomic, readonly, copy) id /* block */ interItemSpacingProvider;
@property (nonatomic) bool useEngagementSpacing;

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetsToCenterFirstAndLastItemsGivenContainerSize:(struct CGSize { double x1; double x2; })arg1 itemSize:(struct CGSize { double x1; double x2; })arg2;
+ (double)minimumInterItemSpacingForVisibileBoundsSize:(struct CGSize { double x1; double x2; })arg1 defaultCellSize:(struct CGSize { double x1; double x2; })arg2 engagedCellSize:(struct CGSize { double x1; double x2; })arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })cellSizeForEngagement:(double)arg1;
- (struct CGPoint { double x1; double x2; })centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize { double x1; double x2; })arg2 proposedOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (double)contentOriginXForVisibleSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })contentSizeForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 numberOfItems:(long long)arg2;
- (double)contentTrailingXForVisibleSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })defaultCellSize;
- (struct CGSize { double x1; double x2; })engagedCellSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })engagementBoundsForContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })engagementBoundsInsets;
- (double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeak:(double)arg4;
- (double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeakBegin:(double)arg4 rangePeakEnd:(double)arg5;
- (struct CGSize { double x1; double x2; })engagementSizeForVisibleBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementAfterElementEndingAt:(double)arg1 engagementBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 verticalBounds:(struct { double x1; double x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 engagementBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 verticalBounds:(struct { double x1; double x2; })arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementBeforeElementStartingAt:(double)arg1 engagementBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 verticalBounds:(struct { double x1; double x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForElementBeforeOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)indexesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 numberOfItems:(long long)arg3;
- (id)initWithDefaultCellSize:(struct CGSize { double x1; double x2; })arg1 engagedCellSize:(struct CGSize { double x1; double x2; })arg2 baseInteritemSpacing:(double)arg3;
- (id)initWithDefaultCellSize:(struct CGSize { double x1; double x2; })arg1 engagedCellSize:(struct CGSize { double x1; double x2; })arg2 interItemSpacingProvider:(id /* block */)arg3;
- (id)initWithDefaultCellSize:(struct CGSize { double x1; double x2; })arg1 engagedCellSize:(struct CGSize { double x1; double x2; })arg2 useEngagementSpacing:(bool)arg3 interItemSpacingProvider:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)interItemSpacingProvider;
- (double)interitemSpacingForEngagement:(double)arg1;
- (void)setEngagementBoundsInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setUseEngagementSpacing:(bool)arg1;
- (double)spacingAfterElementEndingAt:(double)arg1 engagementBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)spacingBeforElementStartingAt:(double)arg1 engagementBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)useEngagementSpacing;
- (double)xAxisScale;

@end
