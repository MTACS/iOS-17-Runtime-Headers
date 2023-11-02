
@interface XRPassFailIssueResponder : NSObject <XRIssueResponder> {
    <XRIssueResponder> * _nextResponder;
    NSMutableArray * _uniqueErrors;
    NSObject<OS_dispatch_queue> * _uniqueErrorsQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool failureOccurred;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)failureOccurred;
- (id)failures;
- (void)handleIssue:(id)arg1 type:(short)arg2 from:(id)arg3;
- (id)init;
- (id)initWithNextResponder:(id)arg1;

@end
