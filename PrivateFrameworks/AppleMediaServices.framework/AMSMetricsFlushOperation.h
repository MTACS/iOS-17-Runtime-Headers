
@interface AMSMetricsFlushOperation : AMSMetricsOperation {
    AMSMutablePromise * _promise;
    <AMSMetricsFlushStrategy> * _strategy;
}

@property (nonatomic, readonly) AMSMutablePromise *promise;
@property (nonatomic, readonly) <AMSMetricsFlushStrategy> *strategy;

- (void).cxx_destruct;
- (id)initWithStrategy:(id)arg1 promise:(id)arg2;
- (id)promise;
- (id)strategy;

@end
