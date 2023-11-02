
@interface PBFEditingZoomAnimationController : NSObject {
    UIView * _complicationsView;
    double  _previewCornerRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _previewFrame;
    UIView * _previewView;
}

@property (nonatomic, readonly) UIView *complicationsView;
@property (nonatomic, readonly) double previewCornerRadius;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } previewFrame;
@property (nonatomic, readonly) UIView *previewView;

- (void).cxx_destruct;
- (id)buildDimmingView;
- (id)buildZoomingViewWithPreviewView:(id)arg1 previewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 editingView:(id)arg3 complicationsView:(id)arg4;
- (id)complicationsView;
- (id)initWithPreviewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 previewCornerRadius:(double)arg2 previewView:(id)arg3 complicationsView:(id)arg4;
- (double)previewCornerRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewFrame;
- (id)previewView;

@end
