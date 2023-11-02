
@interface WFLegacySerializedLSApplicationProxy : NSObject <NSSecureCoding> {
    NSString * _bundleIdentifier;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
