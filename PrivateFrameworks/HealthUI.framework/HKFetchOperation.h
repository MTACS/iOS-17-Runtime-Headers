
@interface HKFetchOperation : NSObject {
    NSUUID * _UUID;
    <HKFetchOperationDelegate> * _delegate;
    double  _executionTime;
    bool  _highPriority;
    NSString * _operationDescription;
    double  _queueTime;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (getter=_delegate, setter=_setDelegate:, nonatomic) <HKFetchOperationDelegate> *delegate;
@property (nonatomic) double executionTime;
@property (nonatomic) bool highPriority;
@property (nonatomic, readonly) NSString *operationDescription;
@property (nonatomic) double queueTime;

- (void).cxx_destruct;
- (id)UUID;
- (void)_alertDelegateDidUpdatePriority;
- (id)_delegate;
- (void)_setDelegate:(id)arg1;
- (double)executionTime;
- (bool)highPriority;
- (id)initWithOperationDescription:(id)arg1;
- (id)operationDescription;
- (double)queueTime;
- (void)setExecutionTime:(double)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setQueueTime:(double)arg1;
- (void)startOperationWithCompletion:(id /* block */)arg1;
- (void)stopOperation;

@end
