
@interface SBFObservable : NSObject <SBFObservable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)forkJoin:(id)arg1;
+ (id)observableWithBlock:(id /* block */)arg1;

- (id)generate:(id /* block */)arg1;
- (id)map:(id /* block */)arg1;
- (id)observeOn:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)subscribeWithResultBlock:(id /* block */)arg1;
- (id)subscribeWithResultBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)waitForResults:(id*)arg1;

@end
