
@interface UINavigationContentAdjustments : NSObject {
    UIScrollView * _adjustedScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetAdjustment;
}

@property (nonatomic) UIScrollView *adjustedScrollView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetAdjustment;

- (void).cxx_destruct;
- (id)adjustedScrollView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insetAdjustment;
- (void)setAdjustedScrollView:(id)arg1;
- (void)setInsetAdjustment:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
