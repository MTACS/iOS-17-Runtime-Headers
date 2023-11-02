
@protocol PGMeaningCriteria <NSObject>

@required

+ (NSString *)criteriaKey;
+ (id)criteriaWithDictionary:(NSDictionary *)arg1;

- (bool)isValid;
- (bool)passesForAssets:(NSArray *)arg1;
- (bool)passesForMomentNode:(PGGraphMomentNode *)arg1 momentNodeCache:(PGMeaningCriteriaMomentNodeCache *)arg2;

@end
