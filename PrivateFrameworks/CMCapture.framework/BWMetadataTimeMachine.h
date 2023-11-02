
@interface BWMetadataTimeMachine : NSObject {
    int  _capacity;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _earliestAllowedPTS;
    id /* block */  _flushHandler;
    NSMutableArray * _metadata;
    NSObject<OS_dispatch_queue> * _metadataHandlingQueue;
    int  _numberOfConsecutiveFlushes;
    NSMutableArray * _requests;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } earliestAllowedPTS;

+ (void)initialize;

- (void)addDroppedFrameForPortType:(id)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)addMetadata:(id)arg1;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })earliestAllowedPTS;
- (id)initWithCapacity:(int)arg1 metadataHandlingPriority:(unsigned int)arg2 flushHandler:(id /* block */)arg3;
- (id)metadataForPTSRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 timeout:(float)arg2;
- (void)reset;
- (void)setEarliestAllowedPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)waitUntilCapacity:(int)arg1 timeout:(float)arg2;

@end
