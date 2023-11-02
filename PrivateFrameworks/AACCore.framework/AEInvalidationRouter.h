
@interface AEInvalidationRouter : NSObject {
    <AEInvalidationRouterDelegate> * _delegate;
    bool  _forwardError;
    long long  _mode;
    bool  _processedInvalidation;
    NSObject<OS_dispatch_queue> * _queue;
    NSError * _storedError;
}

@property (nonatomic, readonly) id /* block */ invalidationHandler;

- (void).cxx_destruct;
- (void)fetchCapturedErrorWithCompletion:(id /* block */)arg1;
- (id)initWithQueue:(id)arg1;
- (id /* block */)invalidationHandler;
- (void)setRouterDelegate:(id)arg1;
- (void)setRouterMode:(long long)arg1;

@end
