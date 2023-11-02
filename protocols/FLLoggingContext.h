
@protocol FLLoggingContext <NSObject>

@required

- (NSFileManager *)fileManager;
- (unsigned long long)now;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)reportTelemetry:(NSString *)arg1 payload:(NSDictionary *)arg2;
- (NSString *)timestampReferenceIdentifier;
- (NSUserDefaults *)userDefaults;

@end
