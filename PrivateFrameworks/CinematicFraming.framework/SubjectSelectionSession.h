
@interface SubjectSelectionSession : NSObject {
    float  _emptySelectionTimeElapsed;
    bool  _enableGazeSelection;
    void * _espressoContext;
    struct { 
        void *plan; 
        int network_index; 
    }  _espressoNetwork;
    void * _espressoPlan;
    float  _gazeElapsedThreshold;
    struct __CVBuffer { } * _gazeFacePixelBuffer;
    struct CGSize { 
        double width; 
        double height; 
    }  _gazeFaceSize;
    NSString * _gazeInputName;
    struct { 
        void *data; 
        void *reserved; 
        unsigned long long dim[4]; 
        unsigned long long stride[4]; 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long channels; 
        unsigned long long batch_number; 
        unsigned long long sequence_length; 
        unsigned long long stride_width; 
        unsigned long long stride_height; 
        unsigned long long stride_channels; 
        unsigned long long stride_batch_number; 
        unsigned long long stride_sequence_length; 
        int storage_type; 
    }  _gazeOutput;
    float  _gazeScoreThreshold;
    NSMutableDictionary * _lastBodyUpdatedTimestamp;
    NSMutableDictionary * _lastFaceUpdatedTimestamp;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastGazeTime;
    NSMutableDictionary * _lastGazedFaceRects;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastTimestamp;
    NSMutableDictionary * _lastUsedBodyRects;
    NSMutableDictionary * _lastUsedFaceRects;
    struct OpaqueVTPixelTransferSession { } * _pixelTransferSession;
    bool  _singleSubjectSelection;
}

@property (nonatomic) bool enableGazeSelection;
@property (nonatomic) bool singleSubjectSelection;

+ (void)filterDetectedObjects:(id)arg1 usedFaceIDs:(id)arg2 usedBodyIDs:(id)arg3 filteredObjects:(id)arg4;

- (void).cxx_destruct;
- (void)_convertDetectionArrayToDict:(id)arg1 bodyObjects:(id)arg2 faceRects:(id)arg3 bodyRects:(id)arg4;
- (int)_initGaze;
- (void)_pairFaceBody:(id)arg1 bodyObjects:(id)arg2 face2Body:(id)arg3 body2Face:(id)arg4;
- (void)_runGazeDetection:(struct __CVBuffer { }*)arg1 faceObjects:(id)arg2 selectedFaceRects:(id)arg3;
- (int)_runGazeInference:(struct __CVBuffer { }*)arg1 faceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 gazeScore:(float*)arg3;
- (void)_selectAllObjects:(id)arg1 bodyObjects:(id)arg2 usedFaceIDs:(id)arg3 usedBodyIDs:(id)arg4;
- (void)_selectPairRects:(id)arg1 bodyRects:(id)arg2 face2Body:(id)arg3 body2Face:(id)arg4 selectedFaceRects:(id)arg5 selectedBodyRects:(id)arg6;
- (void)_selectSingleSubject:(id)arg1 bodyRects:(id)arg2 selectedFaceRects:(id)arg3 selectedBodyRects:(id)arg4 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 inputPixelBuffer:(struct __CVBuffer { }*)arg6;
- (void)_updateDetectionRects:(id)arg1 bodyObjects:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)dealloc;
- (bool)enableGazeSelection;
- (bool)gazeSubjectSelection;
- (id)init;
- (int)processPixelBuffer:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 detectedObjects:(id)arg3 usedFaceIDs:(id)arg4 usedBodyIDs:(id)arg5;
- (void)setEnableGazeSelection:(bool)arg1;
- (void)setGazeSubjectSelection:(bool)arg1;
- (void)setSingleSubjectSelection:(bool)arg1;
- (bool)singleSubjectSelection;

@end
