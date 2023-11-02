
@interface _EXHostConfiguration : NSObject <NSCopying> {
    NSDictionary * _additionalEnvironmentVariables;
    <_EXExtensionRepresenting> * _extension;
    _EXExtensionIdentity * _extensionIdentity;
    _EXExtensionInstanceIdentifier * _instanceIdentifier;
    id /* block */  _interruptionHandler;
    _EXPersona * _launchPersona;
    NSArray * _preferredLanguages;
    NSString * _sandboxProfileName;
}

@property (copy) NSDictionary *additionalEnvironmentVariables;
@property (nonatomic, retain) <_EXExtensionRepresenting> *extension;
@property (nonatomic, retain) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, retain) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) id /* block */ interruptionHandler;
@property (retain) _EXLaunchConfiguration *launchConfiguration;
@property (copy) _EXPersona *launchPersona;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSString *sandboxProfileName;

- (void).cxx_destruct;
- (id)additionalEnvironmentVariables;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)extension;
- (id)extensionIdentity;
- (id)initWithExtension:(id)arg1;
- (id)initWithExtension:(id)arg1 instanceIdentifier:(id)arg2;
- (id)initWithExtensionIdentity:(id)arg1;
- (id)initWithExtensionIdentity:(id)arg1 instanceIdentifier:(id)arg2;
- (id)instanceIdentifier;
- (id /* block */)interruptionHandler;
- (id)launchConfiguration;
- (id)launchPersona;
- (id)preferredLanguages;
- (id)rbsProcessIdentity;
- (id)sandboxProfileName;
- (void)setAdditionalEnvironmentVariables:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionIdentity:(id)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)setInterruptionHandler:(id /* block */)arg1;
- (void)setLaunchPersona:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setSandboxProfileName:(id)arg1;

@end
