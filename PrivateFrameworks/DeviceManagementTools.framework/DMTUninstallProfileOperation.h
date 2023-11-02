
@interface DMTUninstallProfileOperation : CATOperation {
    <DMTProfileInstallationPrimitives> * _primitives;
    NSString * _profileIdentifier;
}

@property (nonatomic, readonly) <DMTProfileInstallationPrimitives> *primitives;
@property (nonatomic, readonly) NSString *profileIdentifier;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithProfileInstallationPrimitives:(id)arg1 profileIdentifier:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (id)primitives;
- (id)profileIdentifier;
- (void)uninstallProfile;

@end
