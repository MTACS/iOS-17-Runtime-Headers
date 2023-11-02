
@interface AVTAvatarAttributeEditorSectionColorItem : NSObject <AVTAvatarAttributeEditorSectionItem, AVTAvatarAttributeEditorSectionItemInternal> {
    id /* block */  _avatarUpdater;
    AVTCoreModelColor * _color;
    id /* block */  _gradientProvider;
    bool  _hasDerivedColorDependency;
    NSString * _identifier;
    id /* block */  _layerContentProvider;
    NSString * _localizedName;
    bool  _selected;
    AVTColorPreset * _skinColor;
}

@property (nonatomic, readonly, copy) id /* block */ avatarUpdater;
@property (nonatomic, readonly) AVTCoreModelColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) id /* block */ gradientProvider;
@property (nonatomic) bool hasDerivedColorDependency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) id /* block */ layerContentProvider;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) AVTColorPreset *skinColor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)avatarUpdater;
- (id)color;
- (id)colorPreset;
- (id)description;
- (id /* block */)gradientProvider;
- (bool)hasDerivedColorDependency;
- (id)identifier;
- (id)initWithColor:(id)arg1 imageProvider:(id)arg2 colorLayerProvider:(id)arg3 avatarUpdater:(id /* block */)arg4 derivedColorDependent:(bool)arg5 selected:(bool)arg6;
- (id)initWithColor:(id)arg1 skinColor:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 avatarUpdater:(id /* block */)arg5 derivedColorDependent:(bool)arg6 selected:(bool)arg7;
- (bool)isSelected;
- (id /* block */)layerContentProvider;
- (id)localizedName;
- (void)setHasDerivedColorDependency:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (id)skinColor;

@end
