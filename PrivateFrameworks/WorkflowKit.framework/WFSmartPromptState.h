
@interface WFSmartPromptState : NSObject <NSSecureCoding, WFSerializableContent> {
    NSString * _actionUUID;
    WFContentLocation * _contentDestination;
    NSString * _mode;
    WFContentAttribution * _sourceContentAttribution;
    NSString * _status;
}

@property (nonatomic, readonly) NSString *actionUUID;
@property (nonatomic, readonly) WFContentLocation *contentDestination;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *mode;
@property (nonatomic, readonly) WFContentAttribution *sourceContentAttribution;
@property (nonatomic, readonly) NSString *status;
@property (readonly) Class superclass;

+ (id)localizedDeniedPermissionsErrorWithContentDestination:(id)arg1;
+ (id)localizedUnlockedDeviceRequiredError;
+ (id)localizedUnsupportedEnvironmentError;
+ (id)objectWithWFSerializedRepresentation:(id)arg1;
+ (id)stateFromDatabaseData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionUUID;
- (id)contentDestination;
- (id)databaseDataWithError:(id*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(id)arg1 sourceContentAttribution:(id)arg2 actionUUID:(id)arg3 contentDestination:(id)arg4 status:(id)arg5;
- (id)localizedDeniedPermissionsError;
- (id)localizedExfiltrationRestrictedError;
- (bool)matches:(id)arg1;
- (bool)matches:(id)arg1 ignoringAccountData:(bool)arg2;
- (id)mode;
- (id)siriActionToolDescription;
- (id)sourceContentAttribution;
- (id)stateByReplacingAccountWithAppOrigin;
- (id)stateWithStatus:(id)arg1;
- (id)stateWithStatus:(id)arg1 actionUUID:(id)arg2;
- (id)status;
- (id)wfSerializedRepresentation;

@end
