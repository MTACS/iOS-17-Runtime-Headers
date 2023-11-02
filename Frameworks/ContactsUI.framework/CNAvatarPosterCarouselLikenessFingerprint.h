
@interface CNAvatarPosterCarouselLikenessFingerprint : NSObject <NSCopying, NSSecureCoding> {
    <_CNAvatarPosterCarouselLikenessFingerprintImpl> * _impl;
}

+ (id)archiveWithFingerprint:(id)arg1;
+ (id)fingerprintForPosterConfiguration:(id)arg1 snapshotController:(id)arg2;
+ (id)fingerprintForPosterConfiguration:(id)arg1 withConfigurationData:(id)arg2;
+ (id)fingerprintForPosterConfiguration:(id)arg1 withVisualFingerprint:(id)arg2;
+ (id)fingerprintFromArchive:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)visualFingerprintForSnapshotImage:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAvatarVisualFingerprint:(id)arg1 sourceType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithImpl:(id)arg1;
- (id)initWithPosterConfigurationData:(id)arg1;
- (id)initWithPosterVisualFingerprint:(id)arg1 styleAttributes:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
