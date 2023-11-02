
@interface DRSRequestIssueCategoryStats : DRSRequestStats

@property (nonatomic, readonly) NSString *issueCategory;
@property (nonatomic, readonly) NSDictionary *perIssueDescriptionStats;

+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (id)issueCategory;
- (id)perIssueDescriptionStats;

@end
