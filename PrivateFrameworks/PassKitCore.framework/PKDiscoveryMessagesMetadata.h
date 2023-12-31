
@interface PKDiscoveryMessagesMetadata : NSObject {
    NSURL * _messagesBundleURL;
    long long  _version;
}

@property (nonatomic, readonly) NSURL *messagesBundleURL;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)messagesBundleURL;
- (long long)version;

@end
