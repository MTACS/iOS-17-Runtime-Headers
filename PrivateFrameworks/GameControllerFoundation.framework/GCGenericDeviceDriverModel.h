
@interface GCGenericDeviceDriverModel : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _elements;
    GCGenericDeviceInputEventDriverModel * _input;
    GCGenericDeviceRumbleModel * _rumble;
}

@property (readonly, copy) NSSet *elements;
@property (readonly, copy) GCGenericDeviceInputEventDriverModel *input;
@property (readonly, copy) GCGenericDeviceRumbleModel *rumble;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)rumble;

@end
