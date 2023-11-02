
@interface SPUISearchViewClientSceneSettings : UIApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double distanceToTopOfIcons;
@property (readonly) struct CGSize { double x1; double x2; } dockedSearchBarSize;
@property (readonly) unsigned long long hash;
@property (readonly) double keyboardHeight;
@property (getter=isKeyboardPresented, readonly) bool keyboardPresented;
@property (readonly) double keyboardProtectorHeight;
@property (readonly) double searchBarCornerRadius;
@property (readonly) struct CGSize { double x1; double x2; } searchBarSize;
@property (readonly) unsigned int searchHeaderBackgroundContextID;
@property (readonly) unsigned long long searchHeaderBackgroundLayerRenderID;
@property (readonly) unsigned int searchHeaderBlurContextID;
@property (readonly) unsigned long long searchHeaderBlurLayerRenderID;
@property (readonly) unsigned int searchHeaderContextID;
@property (readonly) unsigned long long searchHeaderLayerRenderID;
@property (readonly) Class superclass;

- (double)distanceToTopOfIcons;
- (struct CGSize { double x1; double x2; })dockedSearchBarSize;
- (bool)isKeyboardPresented;
- (id)keyDescriptionForSetting:(long long)arg1;
- (double)keyboardHeight;
- (double)keyboardProtectorHeight;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)searchBarCornerRadius;
- (struct CGSize { double x1; double x2; })searchBarSize;
- (unsigned int)searchHeaderBackgroundContextID;
- (unsigned long long)searchHeaderBackgroundLayerRenderID;
- (unsigned int)searchHeaderBlurContextID;
- (unsigned long long)searchHeaderBlurLayerRenderID;
- (unsigned int)searchHeaderContextID;
- (unsigned long long)searchHeaderLayerRenderID;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end
