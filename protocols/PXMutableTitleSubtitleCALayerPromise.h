
@protocol PXMutableTitleSubtitleCALayerPromise <PXMutableCALayerPromise>

@required

- (void)setSpec:(PXTitleSubtitleLabelSpec *)arg1;
- (void)setSubtitleText:(NSString *)arg1;
- (void)setTitleText:(NSString *)arg1;
- (void)setTypesettingMode:(long long)arg1;
- (PXTitleSubtitleLabelSpec *)spec;
- (NSString *)subtitleText;
- (NSString *)titleText;
- (long long)typesettingMode;

@end
