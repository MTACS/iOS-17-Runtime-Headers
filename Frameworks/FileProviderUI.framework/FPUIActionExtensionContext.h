
@interface FPUIActionExtensionContext : NSExtensionContext {
    NSString * _domainIdentifier;
    NSURL * _initialURL;
    NSError * _setupError;
}

@property (copy) NSString *domainIdentifier;
@property (copy) NSURL *initialURL;
@property (nonatomic, retain) NSError *setupError;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (id)_remoteContext;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequest;
- (void)completeRequestWithUserInfo:(id)arg1;
- (void)didEncounterError:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)domainIdentifier;
- (id)initialURL;
- (void)openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDomainIdentifier:(id)arg1;
- (void)setInitialURL:(id)arg1;
- (void)setSetupError:(id)arg1;
- (id)setupError;

@end
