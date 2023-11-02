
@interface DRSRequestOutcomeStats : DRSRequestStats

@property (nonatomic, readonly) NSDictionary *perStateStats;
@property (nonatomic, readonly) NSString *requestOutcome;

+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (id)perStateStats;
- (id)requestOutcome;

@end
