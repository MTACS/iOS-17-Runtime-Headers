
@interface CBAnalyticsScheduler : NSObject {
    NSObject<OS_os_log> * _logHandle;
    unsigned long long  _requestId;
    NSMutableDictionary * _requests;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (long long)registerHandler:(id /* block */)arg1;
- (void)removeHandler:(long long)arg1;
- (void)run;

@end
