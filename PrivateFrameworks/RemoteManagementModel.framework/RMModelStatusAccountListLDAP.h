
@interface RMModelStatusAccountListLDAP : RMModelStatusBase {
    NSString * _statusDeclarationIdentifier;
    NSString * _statusHostname;
    NSString * _statusIdentifier;
    NSNumber * _statusIsEnabled;
    NSNumber * _statusPort;
    NSNumber * _statusRemoved;
    NSString * _statusUsername;
    NSString * _statusVisibleName;
}

@property (nonatomic, copy) NSString *statusDeclarationIdentifier;
@property (nonatomic, copy) NSString *statusHostname;
@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSNumber *statusIsEnabled;
@property (nonatomic, copy) NSNumber *statusPort;
@property (nonatomic, copy) NSNumber *statusRemoved;
@property (nonatomic, copy) NSString *statusUsername;
@property (nonatomic, copy) NSString *statusVisibleName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 removed:(id)arg2 declarationIdentifier:(id)arg3 visibleName:(id)arg4 hostname:(id)arg5 port:(id)arg6 username:(id)arg7 isEnabled:(id)arg8;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusDeclarationIdentifier:(id)arg1;
- (void)setStatusHostname:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusIsEnabled:(id)arg1;
- (void)setStatusPort:(id)arg1;
- (void)setStatusRemoved:(id)arg1;
- (void)setStatusUsername:(id)arg1;
- (void)setStatusVisibleName:(id)arg1;
- (id)statusDeclarationIdentifier;
- (id)statusHostname;
- (id)statusIdentifier;
- (id)statusIsEnabled;
- (id)statusPort;
- (id)statusRemoved;
- (id)statusUsername;
- (id)statusVisibleName;

@end
