
@interface BWDeepZoomInferenceProvider : BWTiledEspressoInferenceProvider {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _adjustedNormalizedInputCropRect;
    <CMIDeepZoomProcessor> * _deepZoomProcessor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _denormalizedSourceCropRect;
    BWDeepZoomInferenceConfiguration * _inferenceConfig;
    struct { 
        int width; 
        int height; 
    }  _inputReferencePixelBufferDimensions;
    NSMutableArray * _inputVideoRequirements;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedInputCropRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedInputHighResCropRect;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    BWInferenceVideoRequirement * _outputVideoRequirement;
}

+ (void)initialize;

- (unsigned int)allowedPixelBufferCompressionDirection;
- (int)createInputTiles:(void *)arg1 withInputs:(void *)arg2 atPosition:(void *)arg3 cmdBuffer:(void *)arg4; // needs 4 arg types, found 3: id, id, id*
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2;
- (int)preProcessOutputBuffer:(struct __CVBuffer { }*)arg1 forMediaKey:(id)arg2;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)prewarmUsingLimitedMemory:(bool)arg1;
- (int)propagateInferenceResultForOutputRequirement:(id)arg1 storage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)purgeIntermediateResources;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)type;
- (int)writeOutputFor:(void *)arg1 to:(void *)arg2 fromNetworkOutputTiles:(void *)arg3 withAdditionalPixelBuffers:(void *)arg4 withInputTilePixelBuffers:(void *)arg5 withInputFullPixelBuffers:(void *)arg6 atPosition:(void *)arg7 cmdBuffer:(void *)arg8; // needs 8 arg types, found 7: id, struct __CVBuffer { }*, id, id, id, id, id*

@end
