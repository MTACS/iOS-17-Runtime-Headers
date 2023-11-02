
@interface _GCDeviceConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary * _attributes;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *deviceBuilderIdentifier;
@property (readonly, copy) NSArray *deviceDependencies;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *deviceIdentifier;
@property (readonly, copy) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (readonly) unsigned long long priority;
@property (getter=isTransient, readonly) bool transient;

+ (id)configurationWithIdentifier:(id)arg1 priority:(unsigned long long)arg2 deviceIdentifier:(id)arg3 deviceDependencies:(id)arg4 deviceBuilder:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 attributes:(id)arg2;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)deviceBuilderIdentifier;
- (id)deviceDependencies;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConfiguration:(id)arg1;
- (bool)isTransient;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)priority;
- (id)redactedDescription;
- (id)valueForAttribute:(id)arg1;

@end
