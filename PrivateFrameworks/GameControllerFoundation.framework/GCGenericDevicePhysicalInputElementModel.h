
@interface GCGenericDevicePhysicalInputElementModel : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _analog;
    NSString * _identifier;
    NSString * _localizedNameKey;
    NSArray * _names;
    NSString * _symbolName;
}

@property (getter=isAnalog, readonly, copy) NSNumber *analog;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *localizedNameKey;
@property (readonly, copy) NSArray *names;
@property (readonly, copy) NSString *symbolName;

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)isAnalog;
- (bool)isEqual:(id)arg1;
- (id)localizedNameKey;
- (id)names;
- (id)redactedDescription;
- (id)symbolName;

@end
