
@interface CNMetricsReporter : NSObject <CNMetricsReporter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (void)logDatabaseResolution:(id)arg1;
+ (void)sendDictionary:(id)arg1 forEvent:(id)arg2;
+ (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(bool)arg3;

- (id)compoundKeyForEvent:(id)arg1;
- (id)eventKeyPrefix;
- (void)logSimpleEvent:(id)arg1 forApplication:(id)arg2 andLog:(bool)arg3;
- (void)sendDictionary:(id)arg1 forEvent:(id)arg2 andLog:(bool)arg3;

@end
