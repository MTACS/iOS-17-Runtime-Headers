
@interface GEOMapDataSubscriptionDownloadGroup : NSObject {
    NSMutableArray * _completedSubscriptions;
    <GEOMapDataSubscriptionDownloadGroupDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    unsigned long long  _downloadMode;
    NSMutableArray * _failedSubscriptions;
    geo_isolater * _isolation;
    NSMutableArray * _remainingSubscriptions;
    NSArray * _subscriptions;
    GEOXPCActivity * _xpcActivity;
    NSObject<OS_dispatch_source> * _xpcActivityDeferralTimer;
}

@property (nonatomic, readonly) NSArray *completedSubscriptions;
@property (nonatomic, readonly) <GEOMapDataSubscriptionDownloadGroupDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long downloadMode;
@property (nonatomic, readonly) NSArray *remainingSubscriptions;
@property (nonatomic, readonly) NSArray *subscriptions;
@property (nonatomic, readonly) GEOXPCActivity *xpcActivity;

- (void).cxx_destruct;
- (id)completedSubscriptions;
- (id)delegate;
- (unsigned long long)downloadMode;
- (void)finishedDownloadingSubscription:(id)arg1 withError:(id)arg2;
- (id)initWithSubscriptions:(id)arg1 downloadMode:(unsigned long long)arg2 xpcActivity:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)remainingSubscriptions;
- (void)removeSubscriptionWithIdentifier:(id)arg1;
- (void)restartedSubscriptions:(id)arg1;
- (id)subscriptions;
- (id)xpcActivity;

@end
