
@interface FCNewsPersonalizationFeaturePrior : NSObject {
    double  _clicks;
    double  _impressions;
}

@property (nonatomic) double clicks;
@property (nonatomic) double impressions;

- (double)clicks;
- (id)description;
- (double)impressions;
- (id)initWithDictionary:(id)arg1;
- (void)setClicks:(double)arg1;
- (void)setImpressions:(double)arg1;

@end
