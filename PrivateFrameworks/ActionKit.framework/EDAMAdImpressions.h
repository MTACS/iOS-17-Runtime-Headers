
@interface EDAMAdImpressions : FATObject {
    NSNumber * _adId;
    NSNumber * _impressionCount;
    NSNumber * _impressionTime;
}

@property (nonatomic, retain) NSNumber *adId;
@property (nonatomic, retain) NSNumber *impressionCount;
@property (nonatomic, retain) NSNumber *impressionTime;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)adId;
- (id)impressionCount;
- (id)impressionTime;
- (void)setAdId:(id)arg1;
- (void)setImpressionCount:(id)arg1;
- (void)setImpressionTime:(id)arg1;

@end
