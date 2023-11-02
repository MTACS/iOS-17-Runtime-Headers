
@interface GCGenericDeviceRumbleOutputModel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _elementIdentifier;
    NSArray * _fields;
}

@property (readonly, copy) NSString *elementIdentifier;
@property (readonly, copy) NSArray *fields;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)elementIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)fields;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;

@end
