
@interface NUFillKernel : NUComputeKernel {
    struct { 
        double red; 
        double green; 
        double blue; 
        double alpha; 
    }  _color;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  _region;
}

@property (nonatomic) struct { double x1; double x2; double x3; double x4; } color;
@property (nonatomic) struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; } region;

+ (void)fillTexture:(id)arg1 color:(struct { double x1; double x2; double x3; double x4; })arg2 withCommandBuffer:(id)arg3;
+ (void)fillTexture:(id)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 color:(struct { double x1; double x2; double x3; double x4; })arg3 withCommandBuffer:(id)arg4;

- (struct { double x1; double x2; double x3; double x4; })color;
- (void)encodeToCommandBuffer:(id)arg1 destinationTexture:(id)arg2;
- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })region;
- (void)setColor:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;

@end
