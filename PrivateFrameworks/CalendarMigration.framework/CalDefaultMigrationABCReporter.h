
@interface CalDefaultMigrationABCReporter : NSObject <CalMigrationABCReporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)reportIssueWithType:(id)arg1 subtype:(id)arg2 context:(id)arg3 events:(id)arg4;

@end
