
@interface LNParameter : LNProperty {
    LNParameterConfiguration * _configuration;
}

@property (nonatomic, readonly, copy) LNParameterConfiguration *configuration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configuration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2 configuration:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
