
@interface DDSAssertDescriptor : NSObject <NSSecureCoding> {
    NSString * _assertionIdentifier;
    NSString * _clientIdentifier;
    DDSAssetPolicy * _policy;
}

@property (nonatomic, retain) NSString *assertionIdentifier;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) DDSAssetPolicy *policy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assertionIdentifier;
- (id)clientIdentifier;
- (id)description;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPolicy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDescriptor:(id)arg1;
- (id)policy;
- (void)setAssertionIdentifier:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setPolicy:(id)arg1;

@end
