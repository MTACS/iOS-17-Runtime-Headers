
@interface AVTStickerConfigurationReversionContext : NSObject {
    AVTAvatar * _avatar;
    NSMapTable * _customMaterialProperties;
    AVTAvatarEnvironment * _environmentForPointOfViewUpdateFromFramingMode;
    SCNNode * _extraCameraNode;
    SCNNode * _extraPropsNode;
    NSMutableArray * _morpherOverrides;
    NSMutableArray * _presetOverrides;
    SCNScene * _scene;
    NSMapTable * _shaderModifiers;
    NSNumber * _showMemojiBody;
    NSMutableArray * _singleSidedMaterials;
}

- (void).cxx_destruct;
- (id)init;
- (void)resetForAvatar:(id)arg1;
- (void)revertChangesWithScope:(unsigned long long)arg1 animationDuration:(double)arg2;
- (void)saveCustomMaterialPropertyNamed:(id)arg1 forMaterial:(id)arg2;
- (void)saveExtraCameraNode:(id)arg1;
- (void)saveExtraPropsNode:(id)arg1;
- (void)saveMorpherOverride:(id)arg1;
- (void)savePresetOverride:(id)arg1;
- (void)saveShaderModifiers:(id)arg1 forMaterial:(id)arg2;
- (void)saveShowMemojiBody:(bool)arg1;
- (void)saveSingleSidedForMaterial:(id)arg1;
- (void)saveUpdatePointOfViewFromFramingModeInEnvironment:(id)arg1;

@end
