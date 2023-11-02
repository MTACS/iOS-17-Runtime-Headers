
@interface ILMessageFilterCapabilitiesQueryRequest : NSObject <NSSecureCoding> {
    NSString * _extensionIdentifier;
}

@property (nonatomic, readonly, copy) NSString *extensionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;

@end
