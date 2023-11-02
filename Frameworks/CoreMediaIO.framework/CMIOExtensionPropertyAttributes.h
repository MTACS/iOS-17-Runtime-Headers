
@interface CMIOExtensionPropertyAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString * _description;
    id  _maxValue;
    id  _minValue;
    long long  _objectType;
    bool  _readOnly;
    id  _sharedStreamDefaultValue;
    NSArray * _validValues;
}

@property (readonly, copy) id maxValue;
@property (readonly, copy) id minValue;
@property (nonatomic, readonly) long long objectType;
@property (getter=isReadOnly, readonly) bool readOnly;
@property (readonly, copy) NSArray *validValues;

+ (id)propertyAttributesWithMinValue:(id)arg1 maxValue:(id)arg2 validValues:(id)arg3 readOnly:(bool)arg4;
+ (id)propertyAttributesWithSharedStreamDefaultValue:(id)arg1 minValue:(id)arg2 maxValue:(id)arg3 validValues:(id)arg4;
+ (id)readOnlyPropertyAttribute;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 validValues:(id)arg3 readOnly:(bool)arg4;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 validValues:(id)arg3 sharedStreamDefaultValue:(id)arg4;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isReadOnly;
- (id)maxValue;
- (id)minValue;
- (long long)objectType;
- (id)sharedStreamDefaultValue;
- (id)validValues;

@end
