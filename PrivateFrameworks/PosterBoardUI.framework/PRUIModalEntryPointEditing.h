
@interface PRUIModalEntryPointEditing : NSObject <PRUIModalEntryPoint> {
    PRMutablePosterConfiguration * _configuration;
    long long  _editingType;
    NSString * _extensionIdentifier;
    PRSPosterConfiguration * _serviceConfiguration;
    PRSPosterUpdateSessionInfo * _updateSessionInfo;
}

@property (nonatomic, readonly) PRMutablePosterConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long editingType;
@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSServerPosterPath *serverPosterPath;
@property (getter=_serviceConfiguration, nonatomic, readonly) PRSPosterConfiguration *serviceConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PRSPosterUpdateSessionInfo *updateSessionInfo;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_BSXPCSecureCodingEntryPointTypeString;
- (id)_serviceConfiguration;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)editingType;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)extensionIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1 configuration:(id)arg2;
- (id)initWithServiceConfiguration:(id)arg1;
- (id)initWithServiceConfiguration:(id)arg1 updateSessionInfo:(id)arg2;
- (id)initWithType:(long long)arg1 extensionIdentifier:(id)arg2 configuration:(id)arg3 updateSessionInfo:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)serverPosterPath;
- (id)updateSessionInfo;

@end
