
@interface WFCommunicationMethod : NSObject {
    NSString * _bundleIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (long long)callCapability;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 type:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)preferredCallProvider;
- (id)serializedRepresentation;
- (id)type;

@end
