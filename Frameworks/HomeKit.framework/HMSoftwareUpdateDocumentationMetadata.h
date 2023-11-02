
@interface HMSoftwareUpdateDocumentationMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    HMFDigest * _digest;
    NSUUID * _metadataDigestUUID;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, copy) HMFDigest *digest;
@property (readonly, copy) NSUUID *metadataDigestUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)digest;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 digest:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)metadataDigestUUID;

@end
