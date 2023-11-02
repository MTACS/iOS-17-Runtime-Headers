
@interface HFDurationEventBuilder : HFEventBuilder {
    double  _duration;
}

@property (nonatomic) double duration;

- (id)buildNewEventsFromCurrentState;
- (id)compareToObject:(id)arg1;
- (id)comparisonKey;
- (id)description;
- (double)duration;
- (id)eventType;
- (id)initWithEvent:(id)arg1;
- (void)setDuration:(double)arg1;

@end
