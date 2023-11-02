
@protocol BRCJobsMatching <NSObject>

@required

- (NSString *)jobsDescription;
- (PQLFormatInjection *)matchingJobsWhereSQLClause;

@end
