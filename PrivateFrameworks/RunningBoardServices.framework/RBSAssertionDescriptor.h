
@interface RBSAssertionDescriptor : NSObject <NSCopying, RBSXPCSecureCoding> {
    NSArray * _attributes;
    NSString * _explanation;
    RBSAssertionIdentifier * _identifier;
    RBSTarget * _target;
}

@property (nonatomic, readonly, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSAssertionIdentifier *identifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) RBSTarget *target;

+ (id)descriptorWithIdentifier:(id)arg1 target:(id)arg2 explanation:(id)arg3 attributes:(id)arg4;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (id)explanation;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
