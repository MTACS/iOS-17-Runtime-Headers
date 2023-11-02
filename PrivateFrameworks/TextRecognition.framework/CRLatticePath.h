
@interface CRLatticePath : NSObject {
    double  _cnnScore;
    NSArray * _edges;
    double  _geometryScore;
    double  _lexiconScore;
    double  _ngramScore;
    double  _patternScore;
    double  _totalScore;
}

@property (readonly) double cnnScore;
@property (nonatomic, readonly) NSArray *edges;
@property (readonly) double geometryScore;
@property (readonly) double lexiconScore;
@property (readonly) double ngramScore;
@property (readonly) double patternScore;
@property (readonly) double totalScore;

- (void).cxx_destruct;
- (double)cnnScore;
- (id)edges;
- (double)geometryScore;
- (id)initWithEdgeIndexes:(id)arg1 lex:(double)arg2 cnn:(double)arg3 ngram:(double)arg4 geom:(double)arg5 pattern:(double)arg6 total:(double)arg7;
- (double)lexiconScore;
- (double)ngramScore;
- (double)patternScore;
- (double)totalScore;

@end
