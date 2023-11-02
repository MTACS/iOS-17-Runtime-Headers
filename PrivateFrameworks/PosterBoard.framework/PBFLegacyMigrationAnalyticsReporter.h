
@interface PBFLegacyMigrationAnalyticsReporter : NSObject

+ (void)recordWithEvent:(long long)arg1 migrationInfo:(id)arg2 duration:(double)arg3 errorCode:(long long)arg4;

- (id)init;

@end
