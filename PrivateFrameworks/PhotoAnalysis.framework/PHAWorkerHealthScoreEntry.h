
@interface PHAWorkerHealthScoreEntry : NSObject {
    NSDate * _dateRecorded;
    float  _score;
}

@property (nonatomic, readonly, copy) NSDate *dateRecorded;
@property (nonatomic, readonly) float score;

- (void).cxx_destruct;
- (id)dateRecorded;
- (id)initWithScore:(float)arg1;
- (float)score;

@end
