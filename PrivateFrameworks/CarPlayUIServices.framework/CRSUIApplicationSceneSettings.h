
@interface CRSUIApplicationSceneSettings : UICarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings>

@property (nonatomic, readonly) double bannerHeight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long mapStyle;
@property (readonly) Class superclass;

- (double)bannerHeight;
- (long long)mapStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
