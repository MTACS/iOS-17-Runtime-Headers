
@interface CHDProactiveEntry : NSObject {
    NSDate * _date;
    double  _duration;
    bool  _hasRelevance;
    double  _score;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) bool hasRelevance;
@property (nonatomic, readonly) double score;

- (void).cxx_destruct;
- (id)date;
- (double)duration;
- (bool)hasRelevance;
- (id)initWithDate:(id)arg1;
- (id)initWithDate:(id)arg1 score:(double)arg2 duration:(double)arg3;
- (double)score;

@end
