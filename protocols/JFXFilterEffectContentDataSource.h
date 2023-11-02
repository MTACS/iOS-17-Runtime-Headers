
@protocol JFXFilterEffectContentDataSource <JFXEffectContentDataSource>

@required

- (long long)inverseToneMapOperator;
- (NSNumber *)isExpensive;
- (bool)isStyleTransfer;
- (NSNumber *)proxyRenderScale;

@end
