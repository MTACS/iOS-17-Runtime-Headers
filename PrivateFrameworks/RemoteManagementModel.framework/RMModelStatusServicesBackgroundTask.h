
@interface RMModelStatusServicesBackgroundTask : RMModelStatusBase {
    NSString * _statusCodeSignature;
    NSString * _statusIdentifier;
    RMModelStatusServicesBackgroundTask_Launchd * _statusLaunchd;
    NSString * _statusPath;
    NSNumber * _statusRemoved;
    NSString * _statusState;
    NSString * _statusType;
    NSNumber * _statusUid;
}

@property (nonatomic, copy) NSString *statusCodeSignature;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) RMModelStatusServicesBackgroundTask_Launchd *statusLaunchd;
@property (nonatomic, copy) NSString *statusPath;
@property (nonatomic, copy) NSNumber *statusRemoved;
@property (nonatomic, copy) NSString *statusState;
@property (nonatomic, copy) NSString *statusType;
@property (nonatomic, copy) NSNumber *statusUid;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 uid:(id)arg2 path:(id)arg3 state:(id)arg4 type:(id)arg5;
+ (id)buildWithIdentifier:(id)arg1 removed:(id)arg2 codeSignature:(id)arg3 uid:(id)arg4 path:(id)arg5 state:(id)arg6 type:(id)arg7 launchd:(id)arg8;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusCodeSignature:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusLaunchd:(id)arg1;
- (void)setStatusPath:(id)arg1;
- (void)setStatusRemoved:(id)arg1;
- (void)setStatusState:(id)arg1;
- (void)setStatusType:(id)arg1;
- (void)setStatusUid:(id)arg1;
- (id)statusCodeSignature;
- (id)statusIdentifier;
- (id)statusLaunchd;
- (id)statusPath;
- (id)statusRemoved;
- (id)statusState;
- (id)statusType;
- (id)statusUid;

@end
