
@interface ICURLSessionManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _cachedSessions;
}

+ (id)defaultSession;
+ (id)highPrioritySession;
+ (id)sharedSessionManager;
+ (id)unlimitedHighPrioritySession;

- (void).cxx_destruct;
- (id)_defaultSessionIdentifierWithQualityOfService:(long long)arg1 maxConcurrentRequests:(unsigned long long)arg2;
- (id)_defaultSessionWithQualityOfService:(long long)arg1 maxConcurrentRequests:(unsigned long long)arg2;
- (void)addSession:(id)arg1 withIdentifier:(id)arg2;
- (id)init;
- (void)removeSessionWithIdentifier:(id)arg1;
- (id)sessionWithIdentifier:(id)arg1;
- (id)sessionWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)sessionWithIdentifier:(id)arg1 creationBlock:(id /* block */)arg2;
- (id)sessionWithQualityOfService:(long long)arg1;

@end
