
@interface PXStoryWipeTransitionConfiguration : NSObject {
    long long  _capacity;
    NSMutableArray * _clipLayouts;
    long long  _count;
    double  _dividerWidth;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; } * _primaryDividerInfos;
    struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; unsigned long long x5; struct CGPoint { double x_6_1_1; double x_6_1_2; } x6; } * _secondaryDividerInfos;
    struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_2_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_2_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_2_1_3; struct { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_2_1_4; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; } * _sourceStates;
    struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct { struct { double x_1_2_1; double x_1_2_2; double x_1_2_3; } x_2_1_1; struct { double x_2_2_1; double x_2_2_2; double x_2_2_3; } x_2_1_2; struct { double x_3_2_1; double x_3_2_2; double x_3_2_3; } x_2_1_3; struct { double x_4_2_1; double x_4_2_2; double x_4_2_3; } x_2_1_4; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; } * _targetStates;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewportSize;
}

@property (nonatomic) double dividerWidth;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic) struct CGSize { double x1; double x2; } viewportSize;

- (void).cxx_destruct;
- (void)addClipLayout:(id)arg1 configurationBlock:(id /* block */)arg2;
- (void)dealloc;
- (double)dividerWidth;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)enumerateLayoutsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDividerWidth:(double)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })viewportSize;

@end
