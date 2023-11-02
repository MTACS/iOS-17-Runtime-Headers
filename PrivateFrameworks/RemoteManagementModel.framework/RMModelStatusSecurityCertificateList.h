
@interface RMModelStatusSecurityCertificateList : RMModelStatusBase {
    NSData * _statusData;
    NSString * _statusDeclarationIdentifier;
    NSString * _statusIdentifier;
    NSNumber * _statusIsIdentity;
    NSNumber * _statusRemoved;
    NSString * _statusSubjectSummary;
}

@property (nonatomic, copy) NSData *statusData;
@property (nonatomic, copy) NSString *statusDeclarationIdentifier;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSNumber *statusIsIdentity;
@property (nonatomic, copy) NSNumber *statusRemoved;
@property (nonatomic, copy) NSString *statusSubjectSummary;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 subjectSummary:(id)arg2 isIdentity:(id)arg3 data:(id)arg4;
+ (id)buildWithIdentifier:(id)arg1 removed:(id)arg2 declarationIdentifier:(id)arg3 subjectSummary:(id)arg4 isIdentity:(id)arg5 data:(id)arg6;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusData:(id)arg1;
- (void)setStatusDeclarationIdentifier:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusIsIdentity:(id)arg1;
- (void)setStatusRemoved:(id)arg1;
- (void)setStatusSubjectSummary:(id)arg1;
- (id)statusData;
- (id)statusDeclarationIdentifier;
- (id)statusIdentifier;
- (id)statusIsIdentity;
- (id)statusRemoved;
- (id)statusSubjectSummary;

@end
