
@protocol SVXModuleInstanceProviding <NSObject>

@required

- (SVXClientServiceServer *)clientServiceServer;
- (SVXDeviceSetupManager *)deviceSetupManager;
- (<SVXModuleInstance> *)moduleInstanceWithIdentifier:(NSString *)arg1;
- (SVXServiceCommandHandler *)serviceCommandHandler;
- (SVXSessionManager *)sessionManager;
- (SVXSpeechSynthesizer *)speechSynthesizer;
- (SVXSystemObserver *)systemObserver;

@end
