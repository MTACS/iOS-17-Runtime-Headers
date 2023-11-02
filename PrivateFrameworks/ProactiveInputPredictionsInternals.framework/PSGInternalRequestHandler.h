
@interface PSGInternalRequestHandler : NSObject <PSGInternalServerProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PSGInternalServerProtocol> * _clientProxy;
    PSGExperimentResolver * _experimentResolver;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)_getPreferredLanguages;
- (id)_getWordBoundaryExperimentInfo:(id)arg1;
- (id)_getZKWExperimentInfo:(id)arg1;
- (id)_initWithExperimentResolver:(id)arg1;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (id)init;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)sysdiagnoseInformationWithCompletion:(id /* block */)arg1;

@end
