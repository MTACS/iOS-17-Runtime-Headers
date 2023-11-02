
@interface DRSRequestIssueDescriptionStats : DRSRequestStats

@property (nonatomic, readonly) NSString *issueDescription;
@property (nonatomic, readonly) NSDictionary *perOutcomeStats;

+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (id)issueDescription;
- (id)perOutcomeStats;

@end
