
@interface PKContactFieldConfiguration : NSObject <NSSecureCoding> {
    long long  _type;
}

@property (nonatomic, readonly) long long type;

+ (id)contactFieldConfigurationWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (long long)type;

@end
