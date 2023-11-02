
@interface GEORequestThrottler : NSObject {
    NSMutableDictionary * _enqueuedTickets;
    bool  _isSubmitting;
    geo_isolater * _isolater;
    double  _nextSubmissionTime;
    NSObject<OS_dispatch_source> * _submissionTimer;
}

+ (id)sharedThrottler;

- (void).cxx_destruct;
- (void)_scheduleTimer:(double)arg1;
- (void)cancelTicket:(id)arg1;
- (void)enqueueTicket:(id)arg1 submissionHandler:(id /* block */)arg2;
- (id)init;
- (void)submitTickets;

@end
