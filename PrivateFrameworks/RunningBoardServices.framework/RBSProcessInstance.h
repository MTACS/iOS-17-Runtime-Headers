
@interface RBSProcessInstance : NSObject <NSCopying, NSSecureCoding, RBSProcessIdentifier, RBSProcessMatching, RBSXPCSecureCoding> {
    RBSProcessIdentifier * _identifier;
    RBSProcessIdentity * _identity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBSProcessIdentifier *identifier;
@property (nonatomic, readonly) RBSProcessIdentity *identity;
@property (readonly) Class superclass;

+ (id)instanceWithIdentifier:(id)arg1 identity:(id)arg2;
+ (bool)supportsRBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithAuid:(unsigned int)arg1;
- (id)copyWithPersonaString:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identity;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)processPredicate;
- (int)rbs_pid;

@end
