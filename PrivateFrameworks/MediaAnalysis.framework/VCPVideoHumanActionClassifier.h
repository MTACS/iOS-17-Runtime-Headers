
@interface VCPVideoHumanActionClassifier : VCPVideoAnalyzer {
    NSString * _action;
    NSMutableArray * _bodyArray;
    float  _confidence;
    int  _inputChannels;
    float * _inputData;
    int  _inputHeight;
    int  _inputSize;
    int  _inputWidth;
    NSMutableArray * _keyPersonResults;
    VCPCNNModelEspresso * _modelEspresso;
    VCPHumanPoseImageRequest * _poseRequest;
    NSString * _resConfig;
    NSMutableArray * _results;
    bool  _valid;
}

- (void).cxx_destruct;
- (id)analyzeBodyArray:(id)arg1;
- (int)analyzeFrame:(struct __CVBuffer { }*)arg1 withTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 andDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 flags:(unsigned long long*)arg4;
- (int)createModel;
- (void)dealloc;
- (int)detect;
- (int)finishAnalysisPass:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)init;
- (id)keypointsFromObservations:(id)arg1;
- (int)prepareData:(id)arg1;
- (id)privateResults;
- (id)results;

@end
