
@interface ISTypeIcon : ISBindableIcon {
    NSString * _type;
}

@property (readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_fallbackKey;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)makeResourceProvider;
- (id)symbol;
- (id)type;

@end
