
@interface _EXExtensionInstanceIdentifier : NSObject <NSSecureCoding> {
    NSUUID * _identifier;
}

@property (readonly) NSUUID *identifier;
@property (readonly) bool isDefault;

+ (id)defaultInstanceIdentifier;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (bool)isEqualInstanceIdentifier:(id)arg1;

@end
