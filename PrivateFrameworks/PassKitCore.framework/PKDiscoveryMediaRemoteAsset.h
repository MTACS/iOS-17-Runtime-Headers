
@interface PKDiscoveryMediaRemoteAsset : NSObject <NSSecureCoding> {
    NSString * _sha1Hex;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *sha1Hex;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sha1Hex;
- (id)url;

@end
