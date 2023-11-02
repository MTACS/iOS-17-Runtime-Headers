
@interface VCPCNNFastGestureRecognition : NSObject {
    float * _inputData;
    VCPCNNModelEspresso * _modelEspresso;
}

+ (id)detector;

- (void).cxx_destruct;
- (int)createInput:(float*)arg1 keypoints:(id)arg2;
- (void)dealloc;
- (int)gestureDetection:(id)arg1 score:(float*)arg2;
- (int)getDetectionScore:(float*)arg1;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (id)init;
- (int)planDestroy;

@end
