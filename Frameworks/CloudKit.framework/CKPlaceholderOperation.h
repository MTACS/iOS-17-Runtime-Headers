
@interface CKPlaceholderOperation : NSOperation {
    id /* block */  _daemonInvokeBlock;
    int  _executionState;
    bool  _finishInvoked;
    NSObject<OS_dispatch_group> * _group;
    NSString * _operationID;
    NSDate * _startDate;
}

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)description;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (void)main;
- (void)start;

@end
