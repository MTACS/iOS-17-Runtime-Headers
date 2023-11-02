
@interface BWLearnedNRInferenceProvider : BWTiledEspressoInferenceProvider {
    BWLearnedNRInferenceConfiguration * _configuration;
    BWInferenceVideoRequirement * _inputVideoRequirement;
    bool  _isInputFormatRaw;
    LearnedNRMetalStage * _metalStage;
    void _numTiles;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    BWInferenceVideoRequirement * _outputVideoRequirement;
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
    }  _renderROI;
    void _tileSize;
}

+ (void)initialize;

- (int)createInputTiles:(void *)arg1 withInputs:(void *)arg2 atPosition:(void *)arg3 cmdBuffer:(void *)arg4; // needs 4 arg types, found 3: id, id, id*
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2;
- (int)preProcessOutputBuffer:(struct __CVBuffer { }*)arg1 forMediaKey:(id)arg2;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)propagateInferenceResultForOutputRequirement:(id)arg1 storage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)purgeIntermediateResources;
- (int)submitForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 usingStorage:(id)arg2 withSubmissionTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 workQueue:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)type;
- (int)writeOutputFor:(void *)arg1 to:(void *)arg2 fromNetworkOutputTiles:(void *)arg3 withAdditionalPixelBuffers:(void *)arg4 withInputTilePixelBuffers:(void *)arg5 withInputFullPixelBuffers:(void *)arg6 atPosition:(void *)arg7 cmdBuffer:(void *)arg8; // needs 8 arg types, found 7: id, struct __CVBuffer { }*, id, id, id, id, id*

@end
