
@interface _CNAvatarPosterCarouselLikenessFingerprintPosterSnapshotImpl : NSObject <_CNAvatarPosterCarouselLikenessFingerprintImpl> {
    unsigned long long  _preferredTitleAlignment;
    unsigned long long  _preferredTitleLayout;
    UIColor * _titleColor;
    UIFont * _titleFont;
    CNVisualFingerprint * _visualFingerprint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long preferredTitleAlignment;
@property (nonatomic) unsigned long long preferredTitleLayout;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) CNVisualFingerprint *visualFingerprint;

+ (id)fingerprintForPosterConfiguration:(id)arg1 withVisualFingerprint:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisualFingerprint:(id)arg1 titleColor:(id)arg2 titleFont:(id)arg3 preferredTitleLayout:(unsigned long long)arg4 preferredTitleAlignment:(unsigned long long)arg5;
- (id)initWithVisualFingerprint:(id)arg1 titleStyleAttributes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)preferredTitleAlignment;
- (unsigned long long)preferredTitleLayout;
- (void)setPreferredTitleAlignment:(unsigned long long)arg1;
- (void)setPreferredTitleLayout:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setVisualFingerprint:(id)arg1;
- (id)titleColor;
- (id)titleFont;
- (id)visualFingerprint;

@end
