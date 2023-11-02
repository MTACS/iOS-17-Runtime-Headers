
@interface _LTPowerLogger : NSObject {
    NSObject<OS_dispatch_queue> * _loggerQueue;
    NSOrderedSet * _requestTypeSet;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *loggerQueue;
@property (retain) NSOrderedSet *requestTypeSet;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_maskForRequestType:(id)arg1;
- (bool)_shouldLogRequest:(long long)arg1;
- (id)init;
- (void)logTranslateRequestEvent:(id)arg1 requestType:(id)arg2 routeType:(long long)arg3;
- (id)loggerQueue;
- (id)requestTypeSet;
- (void)setLoggerQueue:(id)arg1;
- (void)setRequestTypeSet:(id)arg1;

@end
