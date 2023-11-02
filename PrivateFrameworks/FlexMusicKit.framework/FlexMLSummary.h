
@interface FlexMLSummary : NSObject {
    NSArray * _allBars;
    NSArray * _allBeats;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _duration;
    double  _lkfsValue;
    NSArray * _loopPoints;
    float  _peakValue;
    NSArray * _segments;
    NSDictionary * _videoCues;
}

@property (nonatomic, readonly, copy) NSArray *allBars;
@property (nonatomic, readonly, copy) NSArray *allBeats;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (nonatomic) double lkfsValue;
@property (nonatomic, readonly, copy) NSArray *loopPoints;
@property (nonatomic) float peakValue;
@property (nonatomic, copy) NSArray *segments;
@property (nonatomic, copy) NSDictionary *videoCues;

+ (id)summaryFromSummaries:(id)arg1 targetTimeScale:(int)arg2;

- (void).cxx_destruct;
- (id)allBars;
- (id)allBeats;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)initWithDictionary:(id)arg1 targetTimeScale:(int)arg2;
- (double)lkfsValue;
- (id)loopPoints;
- (float)peakValue;
- (id)segments;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLkfsValue:(double)arg1;
- (void)setPeakValue:(float)arg1;
- (void)setSegments:(id)arg1;
- (void)setVideoCues:(id)arg1;
- (id)videoCues;

@end
