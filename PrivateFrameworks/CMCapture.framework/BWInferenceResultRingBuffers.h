
@interface BWInferenceResultRingBuffers : NSObject {
    struct OpaqueFigSimpleMutex { } * _lock;
    NSMutableDictionary * _rings;
}

- (void)bufferingStatsForType:(int)arg1 firstOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 lastOut:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg3 countOut:(int*)arg4;
- (void)dealloc;
- (id)init;
- (void)insertInferenceResultsFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)retrieveInferencesForType:(int)arg1 beginning:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 until:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)setupRingBuffer:(int)arg1 inferencesOfType:(int)arg2;

@end
