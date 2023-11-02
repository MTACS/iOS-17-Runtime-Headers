
@interface HMIVideoAnalyzerReportRecord : HMFObject {
    unsigned long long  _count;
    NSArray * _frameResultIndices;
    NSString * _key;
    float  _score;
}

@property (readonly) unsigned long long count;
@property (readonly) NSArray *frameResultIndices;
@property (readonly) NSString *key;
@property (readonly) float score;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)frameResultIndices;
- (id)initWithKey:(id)arg1 classificationScore:(id)arg2;
- (id)initWithKey:(id)arg1 detectionScores:(id)arg2 frameResultIndex:(unsigned long long)arg3;
- (id)initWithKey:(id)arg1 trackingScores:(id)arg2 frameResultIndices:(id)arg3;
- (id)key;
- (float)score;

@end
