
@interface WLKRottenTomatoesRating : NSObject {
    unsigned long long  _freshness;
    NSNumber * _freshnessPercentage;
}

@property (nonatomic, readonly) unsigned long long freshness;
@property (nonatomic, readonly, copy) NSNumber *freshnessPercentage;

+ (unsigned long long)freshnessForString:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)freshness;
- (id)freshnessPercentage;
- (id)init;
- (id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2;

@end
