
@interface MPCModelRadioGetTracksStep : NSObject {
    ICUserIdentityProperties * _delegatedIdentityProperties;
    NSError * _error;
    bool  _finished;
    ICUserIdentityProperties * _identityProperties;
    ICRadioGetTracksRequest * _request;
    ICRadioGetTracksResponse * _response;
    ICRadioGetTracksResponse * _siriAssetInfoGetTracksResponse;
}

@property (nonatomic, readonly, copy) ICUserIdentityProperties *delegatedIdentityProperties;
@property (nonatomic, readonly, copy) NSError *error;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (nonatomic, readonly, copy) ICUserIdentityProperties *identityProperties;
@property (nonatomic, readonly, copy) ICRadioGetTracksRequest *request;
@property (nonatomic, readonly, copy) ICRadioGetTracksResponse *response;
@property (nonatomic, readonly) ICRadioGetTracksResponse *siriAssetInfoGetTracksResponse;

- (void).cxx_destruct;
- (void)_fireAndForgetServerDialog:(id)arg1;
- (void)_performDefaultHandlingForButtonAction:(id)arg1;
- (void)_presentServerDialog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)delegatedIdentityProperties;
- (id)error;
- (id)identityProperties;
- (id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2;
- (id)initWithPreviousStep:(id)arg1;
- (bool)isFinished;
- (id)nextStepWithError:(id)arg1;
- (void)performWithCompletionHandler:(id /* block */)arg1;
- (id)request;
- (id)response;
- (id)siriAssetInfoGetTracksResponse;

@end
