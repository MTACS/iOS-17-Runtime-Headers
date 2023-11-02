
@interface CEMApplicationListActiveNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase {
    NSString * _statusBundleIdentifier;
    NSString * _statusContainerDisplayName;
    NSString * _statusContainerIdentifier;
    NSString * _statusDisplayName;
    NSString * _statusExtensionPoint;
    NSString * _statusPath;
    NSString * _statusUserElection;
    NSString * _statusVersion;
}

@property (nonatomic, copy) NSString *statusBundleIdentifier;
@property (nonatomic, copy) NSString *statusContainerDisplayName;
@property (nonatomic, copy) NSString *statusContainerIdentifier;
@property (nonatomic, copy) NSString *statusDisplayName;
@property (nonatomic, copy) NSString *statusExtensionPoint;
@property (nonatomic, copy) NSString *statusPath;
@property (nonatomic, copy) NSString *statusUserElection;
@property (nonatomic, copy) NSString *statusVersion;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withPath:(id)arg4 withVersion:(id)arg5 withUserElection:(id)arg6;
+ (id)buildWithBundleIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3 withContainerDisplayName:(id)arg4 withContainerIdentifier:(id)arg5 withPath:(id)arg6 withVersion:(id)arg7 withUserElection:(id)arg8;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusBundleIdentifier:(id)arg1;
- (void)setStatusContainerDisplayName:(id)arg1;
- (void)setStatusContainerIdentifier:(id)arg1;
- (void)setStatusDisplayName:(id)arg1;
- (void)setStatusExtensionPoint:(id)arg1;
- (void)setStatusPath:(id)arg1;
- (void)setStatusUserElection:(id)arg1;
- (void)setStatusVersion:(id)arg1;
- (id)statusBundleIdentifier;
- (id)statusContainerDisplayName;
- (id)statusContainerIdentifier;
- (id)statusDisplayName;
- (id)statusExtensionPoint;
- (id)statusPath;
- (id)statusUserElection;
- (id)statusVersion;

@end
