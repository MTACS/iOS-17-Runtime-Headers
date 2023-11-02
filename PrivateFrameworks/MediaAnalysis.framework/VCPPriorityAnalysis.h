
@interface VCPPriorityAnalysis : NSObject {
    NSMutableArray * _classIndexTracker;
    int  _dominantHand;
    VCPCNNFastGestureRecognition * _fastGestureDetector;
    int  _frameCounter;
    NSDate * _frameEndTimeStamp;
    NSDate * _frameStartTimeStamp;
    struct vector<int, std::allocator<int>> { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, std::allocator<int>> { 
            int *__value_; 
        } __end_cap_; 
    }  _handChiralityCounter;
    bool  _handDetectedInPreviousFrame;
    NSMutableArray * _handKeypointTracker;
    VCPCNNHandsDetector * _handsDetector;
    VCPCNNHandKeypointsDetector * _handsKeypointsDetector;
    int  _inputHeight;
    int  _inputWidth;
    NSMutableArray * _leftHandKeypointTracker;
    float  _prevComputedScore;
    NSArray * _prevFrameHandKeypoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  _prevHandCenter;
    NSDate * _prevTimeSignLanguageDetected;
    NSDate * _prevTimeStampHandDetected;
    NSMutableArray * _rightHandKeypointTracker;
    int  _rotationAngle;
    struct Rotator { struct __CVPixelBufferPool {} *x1; int x2; int x3; int x4; struct OpaqueVTPixelRotationSession {} *x5; } * _rotator;
    struct Scaler { 
        struct CF<__CVPixelBufferPool *> { 
            struct __CVPixelBufferPool {} *value_; 
        } pool_; 
        int width_; 
        int height_; 
        unsigned int format_; 
        struct CF<OpaqueVTPixelTransferSession *> { 
            struct OpaqueVTPixelTransferSession {} *value_; 
        } transfer_session_; 
    }  _scaler;
    double  _singleFrameExecutionTime;
}

+ (id)priorityAnalysis;

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)addKeypointsToNSArray:(struct CGPoint { double x1; double x2; }*)arg1 keypointConfidence:(float)arg2 handBox:(id)arg3 keypointsArray:(id)arg4;
- (int)calculatePriorityScore:(float*)arg1 ofPixelBuffer:(struct __CVBuffer { }*)arg2 withMetadata:(id)arg3;
- (void)dealloc;
- (int)fastSignLanguageDetection:(float*)arg1 ofPixelBuffer:(struct __CVBuffer { }*)arg2 withMetadata:(id)arg3;
- (id)init;

@end
