
@interface CMMotionActivityManager : NSObject {
    id /* block */  fHandler;
    NSOperationQueue * fHandlerQueue;
    void * fLocationConnection;
    NSObject<OS_dispatch_queue> * fQueue;
}

+ (long long)authorizationStatus;
+ (bool)isActivityAvailable;
+ (bool)isActivityLiteAvailable;
+ (void)paginateDatesIntoDatesFrom:(id)arg1 datesTo:(id)arg2 start:(id)arg3 end:(id)arg4 intervalLength:(double)arg5;

- (void)_handleQueryResponse:(struct shared_ptr<CLConnectionMessage> { struct CLConnectionMessage {} *x1; struct __shared_weak_count {} *x2; })arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (bool)isActivity:(id)arg1 sustainedForAttribute:(long long)arg2;
- (bool)isTimeFromActivity:(id)arg1 toActivity:(id)arg2 withinLimitForAttribute:(long long)arg3;
- (void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (void)queryActivityWithAttribute:(long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 toQueue:(id)arg4 withHandler:(id /* block */)arg5;
- (void)startActivityLiteUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startActivityUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)startPeriodicActivityUpdatesToQueue:(id)arg1 withHandler:(id /* block */)arg2;
- (void)stopActivityLiteUpdates;
- (void)stopActivityUpdates;
- (void)stopPeriodicActivityUpdates;

@end
