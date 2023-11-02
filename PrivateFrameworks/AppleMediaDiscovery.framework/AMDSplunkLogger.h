
@interface AMDSplunkLogger : NSObject

+ (bool)checkSchemaValidity:(id)arg1;
+ (void)flushEvents:(id)arg1;
+ (id)logEvents:(id)arg1 toTopic:(id)arg2 withSchema:(id)arg3;
+ (id)logPayload:(id)arg1 error:(id*)arg2;

@end
