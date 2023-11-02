
@interface PXStoryPanTransitionConfiguration : NSObject {
    long long  _capacity;
    NSMutableArray * _clipLayouts;
    long long  _count;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _sourceRects;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _targetRects;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;

- (void).cxx_destruct;
- (void)addClipLayout:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 targetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)enumerateLayoutsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
