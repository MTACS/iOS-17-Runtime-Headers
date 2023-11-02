
@interface NUCGImageDepthSourceNode : NUCGAuxiliaryImageSourceNode {
    struct { 
        long long width; 
        long long height; 
    }  _aspectMatchedPixelSize;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _aspectTransform;
    bool  _needsAspectRatioCorrection;
}

- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (id)initWithSourceNode:(id)arg1 auxiliaryImageProperties:(id)arg2;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;

@end
