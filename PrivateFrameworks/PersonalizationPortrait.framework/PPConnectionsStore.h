
@interface PPConnectionsStore : NSObject <PPClientStore, PPFeedbackAccepting> {
    PPClientFeedbackHelper * _clientFeedbackHelper;
}

@property (nonatomic, retain) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (bool)iterRecentLocationDonationsSinceDate:(id)arg1 client:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 client:(id)arg4 error:(id*)arg5 block:(id /* block */)arg6;
- (bool)iterRecentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 client:(id)arg5 error:(id*)arg6 block:(id /* block */)arg7;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;

@end
