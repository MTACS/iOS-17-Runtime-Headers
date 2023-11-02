
@interface _CNOffMainThreadScheduler : NSObject <CNScheduler> {
    <CNScheduler> * _alreadyOffMainThreadScheduler;
    <CNScheduler> * _needToGetOffMainThreadScheduler;
}

@property (nonatomic, readonly) <CNScheduler> *alreadyOffMainThreadScheduler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNScheduler> *needToGetOffMainThreadScheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)os_log;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2;
- (id)afterDelay:(double)arg1 performBlock:(id /* block */)arg2 qualityOfService:(unsigned long long)arg3;
- (id)alreadyOffMainThreadScheduler;
- (id)description;
- (id)init;
- (id)initWithBackgroundScheduler:(id)arg1;
- (id)needToGetOffMainThreadScheduler;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(id /* block */)arg1;
- (id)performCancelableBlock:(id /* block */)arg1 qualityOfService:(unsigned long long)arg2;
- (double)timestamp;

@end
