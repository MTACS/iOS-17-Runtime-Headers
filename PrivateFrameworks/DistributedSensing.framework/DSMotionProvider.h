
@interface DSMotionProvider : DSProvider {
    <DSMotionProviderDelegate> * _delegate;
}

@property (nonatomic) <DSMotionProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)failedToStartProviderWithOptions:(id)arg1 error:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)requestedMotionDataWithOption:(id)arg1;
- (void)sendMotionData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)startMotionDataProviderWithOptions:(id)arg1;
- (void)startedProviderWithOptions:(id)arg1;
- (void)stopMotionDataProvider;
- (void)stoppedProvider;
- (void)subscribedToMotionDataWithOptions:(id)arg1;
- (void)subscriptionExpired;
- (void)unsubscribed;

@end
