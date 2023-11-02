
@interface _KSRequestThrottle : NSObject {
    id /* block */  _curveFunction;
    NSString * _debugIdentifier;
    double  _maximum;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _request;
    int  _retryCount;
}

@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_launch;
- (id)debugIdentifier;
- (id)init;
- (id)initWithCurve:(id /* block */)arg1 maximumDelay:(double)arg2;
- (void)postRequest:(id /* block */)arg1;
- (id)queue;
- (void)setDebugIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;

@end
