
@interface CKDPlaceholderOperation : NSOperation {
    int  _executionState;
    NSObject<OS_dispatch_group> * _group;
    CKDOperation * _realOperation;
    NSDate * _startDate;
    NSOperationQueue * _targetOperationQueue;
}

@property (nonatomic, readonly) CKDContainer *container;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) CKDOperation *realOperation;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSOperationQueue *targetOperationQueue;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)_startDateString;
- (void)cancel;
- (id)ckShortDescription;
- (id)container;
- (id)description;
- (id)initWithOperation:(id)arg1 targetOperationQueue:(id)arg2;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (id)operationID;
- (id)realOperation;
- (void)start;
- (id)startDate;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)targetOperationQueue;
- (void)transitionToExecuting;
- (void)transitionToFinished;

@end
