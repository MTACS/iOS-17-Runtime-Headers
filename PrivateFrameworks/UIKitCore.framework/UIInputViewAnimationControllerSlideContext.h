
@interface UIInputViewAnimationControllerSlideContext : NSObject {
    UIInputViewSetPlacement * _endPlacement;
    UIView * _snapshot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _snapshotEndFrame;
}

@property (nonatomic, retain) UIInputViewSetPlacement *endPlacement;
@property (nonatomic, retain) UIView *snapshot;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } snapshotEndFrame;

- (void).cxx_destruct;
- (id)endPlacement;
- (void)setEndPlacement:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setSnapshotEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })snapshotEndFrame;

@end
