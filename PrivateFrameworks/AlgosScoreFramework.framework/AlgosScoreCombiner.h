
@interface AlgosScoreCombiner : NSObject {
    int  _debug;
    void * combinerData;
}

@property (nonatomic) int debug;

+ (id)combiner;

- (void)addScore:(double)arg1 weight:(double)arg2 type:(id)arg3 label:(id)arg4;
- (void)clearScores;
- (void)dealloc;
- (int)debug;
- (id)init;
- (id)scoreScores:(id)arg1;
- (void)setDebug:(int)arg1;
- (double)signedMeanSquaredDeviation;

@end
