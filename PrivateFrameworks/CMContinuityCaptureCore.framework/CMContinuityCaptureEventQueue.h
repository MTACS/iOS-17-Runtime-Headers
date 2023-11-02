
@interface CMContinuityCaptureEventQueue : NSObject {
    NSMutableSet * _completedIdentifiers;
    <CMContinuityCaptureEventQueueActionDelegate> * _delegate;
    NSMutableArray * _eventQueue;
    NSSet * _expectedIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_dropStreamStartEventsForEntityIfApplicable;
- (void)_notifyCompletion;
- (void)enqueueEventAction:(unsigned long long)arg1 args:(id)arg2;
- (id)initWithActionDelegate:(id)arg1 queue:(id)arg2;
- (void)notifyCompletion;
- (void)notifyCompletionForIdentfier:(id)arg1;
- (void)setEventCompletionExpectationForIdentifiers:(id)arg1;

@end
