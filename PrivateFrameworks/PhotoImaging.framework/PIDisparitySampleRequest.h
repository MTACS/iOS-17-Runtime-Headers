
@interface PIDisparitySampleRequest : NURenderRequest {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sampleRect;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleTime;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sampleRect;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } sampleTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithComposition:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 sampleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sampleRect;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })sampleTime;
- (void)setSampleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)submit:(id /* block */)arg1;

@end
