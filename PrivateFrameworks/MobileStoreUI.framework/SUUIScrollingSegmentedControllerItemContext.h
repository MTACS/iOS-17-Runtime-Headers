
@interface SUUIScrollingSegmentedControllerItemContext : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _appliedContentInsetsAdjustment;
    <SUUIScrollingSegmentedControllerItemContextDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _desiredContentInsetsAdjustment;
    UIScrollView * _insetAdjustedContentScrollView;
    UIViewController * _viewController;
}

@property (nonatomic) <SUUIScrollingSegmentedControllerItemContextDelegate> *delegate;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_applyNewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withOldContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 toContentScrollView:(id)arg3;
- (void)applyNewContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)delegate;
- (id)init;
- (id)initWithViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateAppliedContentInsetsAdjustment;
- (id)viewController;

@end
