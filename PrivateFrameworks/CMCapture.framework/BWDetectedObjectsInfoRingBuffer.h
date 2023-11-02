
@interface BWDetectedObjectsInfoRingBuffer : NSObject <BWObjectDetector> {
    int  _depth;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastStableObjectPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastUpdatePTS;
    struct OpaqueFigSimpleMutex { } * _mutex;
    int  _numConsecutiveFramesWithObjects;
    NSMutableArray * _ringBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <BWObjectDetector> *objectDetector;
@property (readonly) float secondsSinceLastObjectDetected;
@property (readonly) Class superclass;

- (void)addObjectsFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (void)flush;
- (id)initWithRingBufferDepth:(int)arg1;
- (id)objectDetector;
- (id)objectsForPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)secondsSinceLastObjectDetected;
- (void)transferObjectsToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 totalSensorCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

@end
