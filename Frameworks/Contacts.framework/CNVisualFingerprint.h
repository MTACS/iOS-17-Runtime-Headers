
@interface CNVisualFingerprint : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _hashData;
}

@property (readonly, copy) NSArray *hashData;

+ (id)archiveWithFingerprint:(id)arg1;
+ (id)fingerprintFromArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hashData;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashData:(id)arg1;
- (id)initWithVNFingerprintHashes:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
