
@interface VCPSoundClassifier : NSObject <SNResultsObserving> {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeEnd;
    float  _activeScore;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeStart;
    NSString * _audioQualityAggregated;
    int  _length;
    int  _minDetections;
    NSMutableArray * _results;
    NSString * _resultsKey;
    float  _sampleRate;
    float  _threshold;
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
- (void)addDetectionFromTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 toTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 confidence:(float)arg3;
- (int)finalizeAnalysisAtTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)initWithTrackStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 threshold:(float)arg2 resultsKey:(id)arg3;
- (void)request:(id)arg1 didProduceResult:(id)arg2;
- (id)results;

@end
