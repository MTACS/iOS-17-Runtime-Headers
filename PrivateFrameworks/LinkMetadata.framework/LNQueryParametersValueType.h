
@interface LNQueryParametersValueType : LNValueType

+ (id)objectClassesForCoding;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)objectClass;

@end
