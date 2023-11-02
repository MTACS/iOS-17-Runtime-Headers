
@interface GCGenericDeviceInputEventDriverModel : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _gamepadEventFields;
}

@property (readonly, copy) NSSet *gamepadEventFields;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)gamepadEventFields;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
