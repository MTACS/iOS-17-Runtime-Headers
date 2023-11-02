
@protocol MRRouteRecommendation <NSObject>

@required

- (long long)classification;
- (<MRRouteRepresentable> *)route;
- (void)setClassification:(long long)arg1;
- (void)setRoute:(id <MRRouteRepresentable>)arg1;
- (void)setSortingHint:(NSNumber *)arg1;
- (NSNumber *)sortingHint;

@optional

- (NSString *)reason;
- (void)setReason:(NSString *)arg1;

@end
