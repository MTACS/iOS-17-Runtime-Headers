
@interface CKPinnedConversationActivityItemViewShadowLayer : CAShapeLayer {
    long long  _shadowType;
    long long  _userInterfaceStyle;
}

@property (nonatomic, readonly) long long shadowType;
@property (nonatomic) long long userInterfaceStyle;

- (struct CGSize { double x1; double x2; })_offsetForShadowStyle:(long long)arg1;
- (double)_opacityForShadowStyle:(long long)arg1;
- (double)_radiusForShadowStyle:(long long)arg1;
- (long long)_shadowStyleForShadowType:(long long)arg1 userInterfaceStyle:(long long)arg2;
- (void)_updateShadowProperties;
- (id)initWithShadowType:(long long)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (long long)shadowType;
- (long long)userInterfaceStyle;

@end
