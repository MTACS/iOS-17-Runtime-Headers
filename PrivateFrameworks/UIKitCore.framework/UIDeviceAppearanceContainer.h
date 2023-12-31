
@interface UIDeviceAppearanceContainer : NSObject <_UIAppearanceContainer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_preventsAppearanceProxyCustomization;

- (id)_appearanceContainer;
- (id)_appearanceGuideClass;

@end
