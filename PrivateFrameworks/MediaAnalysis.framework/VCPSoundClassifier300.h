
@interface VCPSoundClassifier300 : NSObject <SNResultsObserving> {
    NSMutableArray * _results;
    NSString * _resultsKey;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _trackStart;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDetectionFromTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 toTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 classification:(id)arg3;
- (int)finalizeAnalysisAtTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)initWithTrackStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 resultsKey:(id)arg2;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (id)results;

@end
