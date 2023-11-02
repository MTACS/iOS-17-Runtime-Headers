
@interface DBIconListView : SBIconListView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;

+ (unsigned long long)iconColumnsForScreenWidth:(double)arg1 iconImageSize:(struct CGSize { double x1; double x2; })arg2 statusBarEdge:(unsigned long long)arg3;
+ (unsigned long long)iconRowsForScreenHeight:(double)arg1 iconImageSize:(struct CGSize { double x1; double x2; })arg2 statusBarEdge:(unsigned long long)arg3 interactionAffordances:(unsigned long long)arg4;

- (bool)adaptsOrientationToTraitCollection;
- (struct CGSize { double x1; double x2; })alignmentIconSize;
- (bool)automaticallyAdjustsLayoutMetricsToFit;
- (Class)baseIconViewClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutInsetsForOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)usesAlternateLayout;

@end
