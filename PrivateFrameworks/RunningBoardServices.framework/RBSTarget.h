
@interface RBSTarget : NSObject <NSCopying, RBSProcessMatching, RBSXPCSecureCoding> {
    NSObject<OS_xpc_object> * _endpoint;
    NSString * _environment;
    RBSProcessIdentifier * _processIdentifier;
    RBSProcessIdentity * _processIdentity;
    NSString * _shortDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic, readonly, copy) NSString *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessIdentifier *processIdentifier;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly) NSString *shortDescription;
@property (readonly) Class superclass;
@property (getter=isSystem, nonatomic, readonly) bool system;

+ (id)currentProcess;
+ (bool)supportsRBSXPCSecureCoding;
+ (id)systemTarget;
+ (id)targetWithEndpoint:(id)arg1;
+ (id)targetWithPid:(int)arg1;
+ (id)targetWithPid:(int)arg1 environmentIdentifier:(id)arg2;
+ (id)targetWithProcessIdentifier:(id)arg1;
+ (id)targetWithProcessIdentifier:(id)arg1 environmentIdentifier:(id)arg2;
+ (id)targetWithProcessIdentity:(id)arg1;
+ (id)targetWithProcessIdentity:(id)arg1 environmentIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)copyWithPersonaString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)endpoint;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSystem;
- (bool)matchesProcess:(id)arg1;
- (id)processIdentifier;
- (id)processIdentity;
- (id)processPredicate;
- (id)shortDescription;

@end
