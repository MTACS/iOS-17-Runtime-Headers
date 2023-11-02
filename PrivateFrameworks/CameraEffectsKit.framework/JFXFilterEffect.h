
@interface JFXFilterEffect : JFXEffect

+ (bool)supportsSecureCoding;

- (id)contentProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enablePresentationState:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)filterContentDataSource;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)renderEffect;
- (void)setForceRenderAtPosterFrame:(bool)arg1;
- (int)type;

@end
