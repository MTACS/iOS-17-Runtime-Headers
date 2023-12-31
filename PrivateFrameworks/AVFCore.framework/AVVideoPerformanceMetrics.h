
@interface AVVideoPerformanceMetrics : NSObject {
    AVVideoPerformanceMetricsInternal * _performanceMetricsInternal;
}

@property (nonatomic, readonly) unsigned long long numberOfCorruptedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfDisplayCompositedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfDroppedVideoFrames;
@property (nonatomic, readonly) unsigned long long numberOfNonDisplayCompositedVideoFrames;
@property (nonatomic, readonly) double totalFrameDelay;
@property (nonatomic, readonly) unsigned long long totalNumberOfVideoFrames;

- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)numberOfCorruptedVideoFrames;
- (unsigned long long)numberOfDisplayCompositedVideoFrames;
- (unsigned long long)numberOfDroppedVideoFrames;
- (unsigned long long)numberOfNonDisplayCompositedVideoFrames;
- (double)totalFrameDelay;
- (unsigned long long)totalNumberOfVideoFrames;

@end
