
@interface _CNAvatarPosterCarouselLikenessFingerprintAvatarImpl : NSObject <_CNAvatarPosterCarouselLikenessFingerprintImpl> {
    long long  _sourceType;
    CNVisualFingerprint * _visualFingerprint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sourceType;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNVisualFingerprint *visualFingerprint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisualFingerprint:(id)arg1 sourceType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setVisualFingerprint:(id)arg1;
- (double)similarityThreshold;
- (long long)sourceType;
- (id)visualFingerprint;

@end
