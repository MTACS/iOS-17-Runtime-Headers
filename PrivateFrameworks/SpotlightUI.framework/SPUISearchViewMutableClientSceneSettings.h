
@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distanceToTopOfIcons;
@property (nonatomic) struct CGSize { double x1; double x2; } dockedSearchBarSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) double keyboardHeight;
@property (getter=isKeyboardPresented, nonatomic) bool keyboardPresented;
@property (nonatomic) double keyboardProtectorHeight;
@property (nonatomic) double searchBarCornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } searchBarSize;
@property (nonatomic) unsigned int searchHeaderBackgroundContextID;
@property (nonatomic) unsigned long long searchHeaderBackgroundLayerRenderID;
@property (nonatomic) unsigned int searchHeaderBlurContextID;
@property (nonatomic) unsigned long long searchHeaderBlurLayerRenderID;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (nonatomic) unsigned long long searchHeaderLayerRenderID;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)distanceToTopOfIcons;
- (struct CGSize { double x1; double x2; })dockedSearchBarSize;
- (bool)isKeyboardPresented;
- (id)keyDescriptionForSetting:(long long)arg1;
- (double)keyboardHeight;
- (double)keyboardProtectorHeight;
- (double)searchBarCornerRadius;
- (struct CGSize { double x1; double x2; })searchBarSize;
- (unsigned int)searchHeaderBackgroundContextID;
- (unsigned long long)searchHeaderBackgroundLayerRenderID;
- (unsigned int)searchHeaderBlurContextID;
- (unsigned long long)searchHeaderBlurLayerRenderID;
- (unsigned int)searchHeaderContextID;
- (unsigned long long)searchHeaderLayerRenderID;
- (void)setDistanceToTopOfIcons:(double)arg1;
- (void)setDockedSearchBarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setKeyboardHeight:(double)arg1;
- (void)setKeyboardPresented:(bool)arg1;
- (void)setKeyboardProtectorHeight:(double)arg1;
- (void)setSearchBarCornerRadius:(double)arg1;
- (void)setSearchBarSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSearchHeaderBackgroundContextID:(unsigned int)arg1;
- (void)setSearchHeaderBackgroundLayerRenderID:(unsigned long long)arg1;
- (void)setSearchHeaderBlurContextID:(unsigned int)arg1;
- (void)setSearchHeaderBlurLayerRenderID:(unsigned long long)arg1;
- (void)setSearchHeaderContextID:(unsigned int)arg1;
- (void)setSearchHeaderLayerRenderID:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(long long)arg3;

@end
