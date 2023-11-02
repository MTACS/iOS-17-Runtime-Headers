
@interface ISIconTypeResourceLocator : ISIconResourceLocator <NSSecureCoding> {
    NSString * _type;
}

@property (readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowLocalizedIcon;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1;
- (id)preferedResourceName;
- (id)resourceDirectoryURL;
- (id)type;

@end
