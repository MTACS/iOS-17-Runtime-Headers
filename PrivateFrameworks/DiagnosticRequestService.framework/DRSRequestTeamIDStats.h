
@interface DRSRequestTeamIDStats : DRSRequestStats

@property (nonatomic, readonly) NSDictionary *perIssueCategoryStats;
@property (nonatomic, readonly) NSString *teamID;

+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (id)perIssueCategoryStats;
- (id)teamID;

@end
