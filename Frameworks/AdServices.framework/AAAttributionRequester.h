
@interface AAAttributionRequester : NSObject {
    NSXPCConnection * _connection;
    bool  _connectionInterrupted;
    bool  _isMainThread;
    <AAAttribution_XPC> * _remoteProxy;
    NSDate * _requestTime;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

@property (nonatomic) bool connectionInterrupted;
@property (nonatomic) bool isMainThread;
@property (nonatomic, retain) <AAAttribution_XPC> *remoteProxy;
@property (nonatomic, retain) NSDate *requestTime;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } unfairLock;

+ (id)_createInternalError;
+ (long long)_findBucketForDaemonRunningTime:(double)arg1;
+ (long long)_tokenStatusFromTokenSource:(long long)arg1;

- (void).cxx_destruct;
- (void)_reportTokenStatus:(long long)arg1 storeFront:(id)arg2 daemonRunningTime:(double)arg3;
- (void)_sendAnalyticsAndInvalidateConnection:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (bool)connectionInterrupted;
- (bool)isMainThread;
- (id)remoteProxy;
- (id)requestTime;
- (void)setConnectionInterrupted:(bool)arg1;
- (void)setIsMainThread:(bool)arg1;
- (void)setRemoteProxy:(id)arg1;
- (void)setRequestTime:(id)arg1;
- (void)setUnfairLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (struct os_unfair_lock_s { unsigned int x1; })unfairLock;

@end
