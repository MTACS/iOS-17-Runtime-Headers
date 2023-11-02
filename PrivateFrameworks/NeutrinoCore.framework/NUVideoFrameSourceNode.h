
@interface NUVideoFrameSourceNode : NUSourceNode {
    long long  _orientation;
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _originalExtent;
}

@property (nonatomic, readonly) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } originalExtent;

- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id*)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)applySourceOptions:(id)arg1 image:(id)arg2;
- (id)initWithSettings:(id)arg1;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })originalExtent;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;
- (long long)sourceOrientation;

@end
