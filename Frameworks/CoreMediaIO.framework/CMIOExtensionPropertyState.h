
@interface CMIOExtensionPropertyState : NSObject <NSCopying, NSSecureCoding> {
    CMIOExtensionPropertyAttributes * _attributes;
    NSString * _description;
    long long  _objectType;
    id  _value;
}

@property (readonly) CMIOExtensionPropertyAttributes *attributes;
@property (nonatomic, readonly) long long objectType;
@property (readonly, copy) id value;

+ (id)copyPropertyStatesFromXPCDictionary:(id)arg1;
+ (id)copyXPCDictionaryFromPropertyStates:(id)arg1;
+ (id)copyXPCDictionaryFromPropertyValues:(id)arg1;
+ (id)propertyStateWithValue:(id)arg1;
+ (id)propertyStateWithValue:(id)arg1 attributes:(id)arg2;
+ (bool)supportsSecureCoding;

- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCDictionary;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1;
- (id)initWithValue:(id)arg1 attributes:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)objectType;
- (id)value;

@end
