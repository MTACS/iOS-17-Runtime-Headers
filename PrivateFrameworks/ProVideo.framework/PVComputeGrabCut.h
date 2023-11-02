
@interface PVComputeGrabCut : NSObject {
    struct HFGrabCutInterface { int (**x1)(); struct HFGrabCut {} *x2; } * _module;
}

- (void)dealloc;
- (id)init;
- (bool)processImage:(id)arg1 trimap:(id)arg2 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 clusters:(int)arg4 gamma:(float)arg5 iterations:(int)arg6 mask:(id)arg7;
- (void)reset;

@end
