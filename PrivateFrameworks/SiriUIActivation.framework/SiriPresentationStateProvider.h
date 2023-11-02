
@interface SiriPresentationStateProvider : NSObject {
    <SiriPresentationStateProviderDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SASPresentationState * _presentationState;
    bool  _shouldProvideUpdates;
    bool  _updatesAvailable;
}

@property (nonatomic) <SiriPresentationStateProviderDelegate> *delegate;
@property (nonatomic) bool shouldProvideUpdates;
@property (nonatomic) bool updatesAvailable;

- (void).cxx_destruct;
- (void)_dispatchedDiffAndApplyMutatedStatus:(id)arg1;
- (void)_invokeOnDispatchQueue:(id /* block */)arg1;
- (void)_setupProviderForSiriPresentationIdentifier:(long long)arg1;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (void)beginProvidingPresentationStateUpdates;
- (id)delegate;
- (id)initWithSiriPresentationIdentifier:(long long)arg1 delegate:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setShouldProvideUpdates:(bool)arg1;
- (void)setUpdatesAvailable:(bool)arg1;
- (bool)shouldProvideUpdates;
- (void)stopProvidingPresentationStateUpdatesAndResendLastUpdateOnResumption:(bool)arg1;
- (bool)updatesAvailable;

@end
