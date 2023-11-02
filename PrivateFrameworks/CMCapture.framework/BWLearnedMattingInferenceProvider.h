
@interface BWLearnedMattingInferenceProvider : BWTiledEspressoInferenceProvider {
    bool  _appliesFinalCropRect;
    void _inputAlphaScale;
    BWInferenceVideoRequirement * _inputAlphaVideoRequirement;
    BWInferenceVideoRequirement * _inputImageVideoRequirement;
    void _inputTileOverlap;
    void _inputTileSize;
    struct OpaqueVTPixelTransferSession { } * _lowResSegmentationCloneCopySession;
    FigLearnedMattingMetalStage * _metalProcessor;
    void _numTiles;
    BWInferenceVideoRequirement * _outputAlphaVideoRequirement;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    struct opaqueCMFormatDescription { } * _outputLowResSegmentationCloneFormatDescription;
    BWInferenceVideoRequirement * _outputLowResSegmentationCloneVideoRequirement;
    void _outputTileOverlap;
    void _outputTileSize;
}

+ (void)initialize;

- (int)createInputTiles:(void *)arg1 withInputs:(void *)arg2 atPosition:(void *)arg3 cmdBuffer:(void *)arg4; // needs 4 arg types, found 3: id, id, id*
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 resourceProvider:(id)arg2;
- (int)preProcessOutputBuffer:(struct __CVBuffer { }*)arg1 forMediaKey:(id)arg2;
- (int)prepareForSubmissionWithWorkQueue:(id)arg1;
- (int)propagateInferenceResultForOutputRequirement:(id)arg1 storage:(id)arg2 propagationSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg3;
- (int)purgeIntermediateResources;
- (int)type;
- (int)writeOutputFor:(void *)arg1 to:(void *)arg2 fromNetworkOutputTiles:(void *)arg3 withAdditionalPixelBuffers:(void *)arg4 withInputTilePixelBuffers:(void *)arg5 withInputFullPixelBuffers:(void *)arg6 atPosition:(void *)arg7 cmdBuffer:(void *)arg8; // needs 8 arg types, found 7: id, struct __CVBuffer { }*, id, id, id, id, id*

@end
