
@interface RBSXPCServiceIdentity : NSObject <NSSecureCoding, RBSXPCSecureCoding> {
    RBSXPCServiceDefinition * _definition;
    RBSProcessInstance * _host;
    NSString * _personaString;
    NSString * _sessionID;
    NSUUID * _uuid;
    NSData * _validationToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) RBSXPCServiceDefinition *definition;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessInstance *host;
@property (nonatomic, readonly, copy) NSString *personaString;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly, copy) NSData *validationToken;

+ (id)identityWithDefinition:(id)arg1 sessionID:(id)arg2 host:(id)arg3 UUID:(id)arg4;
+ (id)identityWithDefinition:(id)arg1 sessionID:(id)arg2 host:(id)arg3 UUID:(id)arg4 persona:(id)arg5 validationToken:(id)arg6;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)definition;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)host;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)personaString;
- (id)sessionID;
- (id)uuid;
- (id)validationToken;

@end
