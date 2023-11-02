
@interface BLSAssertionDescriptor : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    NSArray * _attributes;
    NSString * _explanation;
}

@property (nonatomic, readonly, copy) NSArray *attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeOfClass:(Class)arg1;
- (id)attributes;
- (id)attributesOfClasses:(id)arg1;
- (bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)explanation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExplanation:(id)arg1 attributes:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
