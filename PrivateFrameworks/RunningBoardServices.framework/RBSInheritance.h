
@interface RBSInheritance : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSObject<OS_xpc_object> * _encodedEndowment;
    NSString * _endowmentNamespace;
    NSString * _environment;
    unsigned long long  _hash;
    unsigned long long  _originatingAttributePath;
    RBSAssertionIdentifier * _originatingIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *encodedEndowment;
@property (nonatomic, readonly, copy) NSString *endowmentNamespace;
@property (nonatomic, readonly) NSString *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSAssertionIdentifier *originatingIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNamespace:(id)arg1 environment:(id)arg2 encodedEndowment:(id)arg3 originatingIdentifier:(id)arg4 attributePath:(unsigned long long)arg5;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)encodedEndowment;
- (id)endowment;
- (id)endowmentNamespace;
- (id)environment;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originatingIdentifier;

@end
