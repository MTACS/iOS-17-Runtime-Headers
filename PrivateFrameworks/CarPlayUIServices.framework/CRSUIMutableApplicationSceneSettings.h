
@interface CRSUIMutableApplicationSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings, CRSUIMutableMapStyleProviding>

@property (nonatomic) double bannerHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (readonly) Class superclass;

- (double)bannerHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)mapStyle;
- (void)setBannerHeight:(double)arg1;
- (void)setMapStyle:(long long)arg1;

@end
