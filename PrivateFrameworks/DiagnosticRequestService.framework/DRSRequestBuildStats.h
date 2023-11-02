
@interface DRSRequestBuildStats : DRSRequestStats

@property (nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) NSDictionary *perTeamIDStats;

+ (Class)childStatsClass;
+ (id)descriptionStringForRequest:(id)arg1;
+ (id)keyName;

- (id)build;
- (id)perTeamIDStats;

@end
