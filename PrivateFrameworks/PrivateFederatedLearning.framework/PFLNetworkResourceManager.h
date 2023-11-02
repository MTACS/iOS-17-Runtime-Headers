
@interface PFLNetworkResourceManager : NSObject {
    <PFLNetworkHandler> * _networkHandler;
}

@property (nonatomic, readonly) <PFLNetworkHandler> *networkHandler;

- (void).cxx_destruct;
- (id)_saveModel:(id)arg1 fromLocation:(id)arg2;
- (void)fetchConfigurationWithHandler:(id /* block */)arg1;
- (void)handleResultsForIdentifier:(id)arg1 results:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithNetworkHandler:(id)arg1;
- (id)networkHandler;
- (void)prepareModelResourceForTask:(id)arg1 modelIdentifier:(id)arg2 fromTemporaryLocation:(id)arg3 completion:(id /* block */)arg4;

@end
