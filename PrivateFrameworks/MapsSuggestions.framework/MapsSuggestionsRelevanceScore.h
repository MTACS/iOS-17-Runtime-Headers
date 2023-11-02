
@interface MapsSuggestionsRelevanceScore : NSObject {
    double  _confidence;
    NSDate * _lastInteractionTime;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSDate *lastInteractionTime;

- (void).cxx_destruct;
- (double)confidence;
- (id)initWithConfidence:(double)arg1;
- (id)lastInteractionTime;
- (void)setConfidence:(double)arg1;
- (void)setLastInteractionTime:(id)arg1;

@end
