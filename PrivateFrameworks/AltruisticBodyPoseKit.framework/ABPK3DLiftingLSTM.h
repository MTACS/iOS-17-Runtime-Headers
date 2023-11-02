
@interface ABPK3DLiftingLSTM : NSObject {
    ABPKSkeletonDefinition * _abpkLiftingSkeletonDefinition;
    int  _frameCount;
    double  _imageHeight;
    double  _imageWidth;
    NSMutableDictionary * _inputBufferDict;
    NSArray * _inputTensorLSTMNames;
    ABPK3DLiftingResult * _liftingResult;
    struct vector<simd_float4x4, std::allocator<simd_float4x4>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<simd_float4x4 *, std::allocator<simd_float4x4>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _liftingResultAsModelPoses;
    ABPKMLModelConfiguration3DLiftingLSTM * _mlConfigLSTM;
    ABPKMLNetworkV2 * _networkV2;
    NSMutableDictionary * _outputBufferDict;
    NSArray * _outputTensorLSTMNames;
    bool  _setUpStatus;
    bool  _useEspressoV2;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustBoneLength:(void*)arg1;
- (void)_endLoading3DLiftingLSTMMLModelSignpost;
- (void)_endPostProcessFor3DLiftingLSTMModelDataSignpostWithTimestamp:(double)arg1;
- (void)_endPrepareLiftingLSTMInputSignpostWithTimestamp:(double)arg1;
- (void)_endRunLiftingLSTMModelSignpostWithTimestamp:(double)arg1;
- (void)_startLoading3DLiftingLSTMMLModelSignpost;
- (void)_startPostProcessFor3DLiftingLSTMModelDataSignpostWithTimestamp:(double)arg1;
- (void)_startPrepareLiftingLSTMInputSignpostWithTimestamp:(double)arg1;
- (void)_startRunLiftingLSTMModelSignpostWithTimestamp:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)get3DLiftingResultsAsModelPoses;
- (id)getLiftingResults;
- (id)init;
- (bool)initMLNetwork;
- (void)resetCellStateAndHiddenStateInput;
- (void)resetInputCellStateBuffer;
- (void)resetInputHiddenStateBuffer;
- (int)runLiftingModelWithData:(id)arg1 atTimestamp:(double)arg2;
- (int)runLiftingModelWithData:(id)arg1 imageResolution:(struct CGSize { double x1; double x2; })arg2 deviceOrientation:(long long)arg3 atTimestamp:(double)arg4;
- (int)runLiftingModelWithRawDetectionXYVisbility:(const void*)arg1 with2DReferenceResults:(id)arg2 atTimestamp:(double)arg3 exportDebuggingData:(bool)arg4;
- (void)saveDataToFilePath:(id)arg1 with2DInput:(const void*)arg2 withLSTMOutput:(/* Warning: Unrecognized filer type: '3' using 'void*' */ void**)arg3 withPostprocessedLiftingResults:(/* Warning: Unrecognized filer type: '4' using 'void*' */ void**)arg4;
- (void)updateInputImageResolution:(struct CGSize { double x1; double x2; })arg1;

@end
