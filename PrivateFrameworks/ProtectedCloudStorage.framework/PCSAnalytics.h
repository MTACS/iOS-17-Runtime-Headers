
@interface PCSAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (id)dateOfLastSuccessForEvent:(id)arg1;
- (void)logRecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;
- (void)logSuccessForEvent:(id)arg1;
- (void)logUnrecoverableError:(id)arg1 forEvent:(id)arg2 withAttributes:(id)arg3;
- (void)noteEvent:(id)arg1;

@end
