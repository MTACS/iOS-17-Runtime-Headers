
@interface FASettingsPresetSource : NSObject <NSSecureCoding> {
    FASettingsPresetConfiguration * _configuration;
    NSString * _identifier;
}

@property (nonatomic, readonly) FASettingsPresetConfiguration *configuration;
@property (nonatomic, readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 configuration:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
