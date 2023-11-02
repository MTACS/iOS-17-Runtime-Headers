
@interface FigCaptureImageMotionDetector : NSObject {
    int  _colSumCapacity;
    int  _colSumLength;
    double * _corrArray;
    int  _height;
    struct { 
        double **rowSums; 
        double **colSums; 
        unsigned int curIdx; 
        unsigned int count; 
        unsigned int size; 
    }  _imgProj;
    int * _intColSum;
    int * _intRowSum;
    int  _maximumSearchRange;
    struct { 
        float crossCorrelationMaximum[2]; 
        int maxCorrelationShift[2]; 
        int frameRingBufferCount; 
        int frameRingBufferDistance; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } roi; 
        bool isMotionDetected; 
        bool valid; 
    }  _motionStatistics;
    int  _processedBufferCount;
    int  _rowSumCapacity;
    int  _rowSumLength;
    float  _stationaryThreshold;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sumROI;
    double * _tmpSum1;
    double * _tmpSum2;
    int  _width;
}

@property (nonatomic, readonly) int maximumSearchRange;
@property (nonatomic, readonly) struct { float x1[2]; int x2[2]; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; bool x6; bool x7; } motionStatistics;
@property (nonatomic) float stationaryThreshold;

- (void)dealloc;
- (id)init;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maximumSearchRange:(int)arg3 frameRingSize:(int)arg4;
- (int)maximumSearchRange;
- (struct { float x1[2]; int x2[2]; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; bool x6; bool x7; })motionStatistics;
- (int)processPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)resetProcessingState;
- (int)setCentralROIAndGetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (int)setRoi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 actualROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)setStationaryThreshold:(float)arg1;
- (float)stationaryThreshold;

@end
