
@interface VCPVideoMetaFocusAnalyzer : NSObject {
    VCPVideoMetaFocusSegment * _activeSegment;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _frameTimeRange;
    NSMutableArray * _mutableResults;
}

@property (nonatomic, readonly, retain) NSArray *results;

- (void).cxx_destruct;
- (void)addSegmentToResults;
- (int)finalizeAnalysis;
- (id)init;
- (int)processFrameMetadata:(id)arg1;
- (id)results;

@end
