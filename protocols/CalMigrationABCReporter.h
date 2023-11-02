
@protocol CalMigrationABCReporter <NSObject>

@required

- (void)reportIssueWithType:(NSString *)arg1 subtype:(NSString *)arg2 context:(NSString *)arg3 events:(NSArray *)arg4;

@end
