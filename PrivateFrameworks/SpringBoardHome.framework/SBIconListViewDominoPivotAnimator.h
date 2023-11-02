
@interface SBIconListViewDominoPivotAnimator : NSObject <SBIconListLayoutAnimating> {
    <SBIconListViewDominoPivotAnimatorDelegate> * _delegate;
    SBHIconEditingSettings * _iconEditingSettings;
    SBIcon * _pivotIcon;
    unsigned long long  _pivotIconIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBIconListViewDominoPivotAnimatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SBIcon *pivotIcon;
@property (nonatomic) unsigned long long pivotIconIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)iconListView:(id)arg1 wantsAnimatedLayoutForIconView:(id)arg2 withParameters:(struct SBIconListLayoutAnimationParameters { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; bool x4; struct SBIconCoordinate { long long x_5_1_1; long long x_5_1_2; } x5; bool x6; bool x7; unsigned long long x8; })arg3 alongsideAnimationBlock:(id /* block */)arg4;
- (void)iconListView:(id)arg1 wantsAnimatedRemovalForIconViews:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithPivotIcon:(id)arg1;
- (id)pivotIcon;
- (unsigned long long)pivotIconIndex;
- (void)setDelegate:(id)arg1;
- (void)setPivotIconIndex:(unsigned long long)arg1;

@end
