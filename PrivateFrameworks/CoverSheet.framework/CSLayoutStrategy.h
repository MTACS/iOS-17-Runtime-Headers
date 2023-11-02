
@interface CSLayoutStrategy : NSObject {
    <CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> * _persistentLayout;
}

@property (nonatomic) <CSPersistentContentLayoutProviding><CSDateTimeLayoutAggregating> *persistentLayout;

- (void).cxx_destruct;
- (double)_customListWidthForPage:(id)arg1 startingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (double)_listInsetXForPage:(id)arg1;
- (unsigned long long)_listLayoutForPage:(id)arg1;
- (unsigned long long)_listWidthStrategyForPage:(id)arg1;
- (id)persistentLayout;
- (void)setPersistentLayout:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })suggestedContentInsetsForListForPage:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceCenteredX:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForListForPage:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedVisibleFrameForSleeveInScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forceCenteredX:(bool)arg2;

@end
