
@interface FCNewsTabiEventAggregationDurationEventConditions : FCNewsTabiEventAggregationBaseEventConditions {
    double  _duration;
}

@property (nonatomic, readonly) double duration;

- (id)description;
- (id)dictionary;
- (double)duration;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
