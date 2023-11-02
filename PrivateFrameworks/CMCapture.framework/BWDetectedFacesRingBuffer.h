
@interface BWDetectedFacesRingBuffer : NSObject <BWFaceDetector> {
    int  _depth;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastStableFacePTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastUpdatePTS;
    struct OpaqueFigSimpleMutex { } * _mutex;
    int  _numConsecutiveFramesWithFaces;
    NSMutableArray * _ringBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <BWFaceDetector> *faceDetector;
@property (readonly) unsigned long long hash;
@property (readonly) float secondsSinceLastFaceDetected;
@property (readonly) Class superclass;

- (void)addFacesFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (id)faceDetector;
- (void)flush;
- (id)initWithDepth:(int)arg1;
- (float)secondsSinceLastFaceDetected;
- (void)transferFacesToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 totalSensorCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
