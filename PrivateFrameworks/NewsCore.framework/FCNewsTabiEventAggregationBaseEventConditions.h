
@interface FCNewsTabiEventAggregationBaseEventConditions : NSObject {
    double  _probability;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) double probability;

+ (id)noConditions;

- (id)description;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProbability:(double)arg1;
- (double)probability;

@end
