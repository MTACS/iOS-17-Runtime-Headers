
@protocol PXGAXInfo <PXGAXElement>

@required

- (<PXDisplayAsset> *)axAsset;
- (long long)axContentKind;
- (NSString *)axImageName;
- (NSString *)axSubtitle;
- (NSString *)axText;
- (NSString *)axTitle;
- (NSObject<PXAnonymousView> *)axView;

@end
