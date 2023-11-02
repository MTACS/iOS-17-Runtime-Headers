
@interface NTKPhotosFace : NTKBasePhotosFace {
    bool  _editing;
}

+ (bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
+ (bool)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)pigmentFaceDomain;
+ (id)sortableFaceWithAssets:(id)arg1;
+ (bool)supportsExternalAssets;

- (void)_cleanupEditOptions;
- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_localizedStringForExternal:(id)arg1 comment:(id)arg2;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (void)_prepareEditOptions;
- (id)addFaceDetailViewController;
- (void)companionEditorWithAssets:(id)arg1 completion:(id /* block */)arg2;
- (id)libraryDetailViewController;
- (bool)requiresPigmentEditOption;
- (long long)timeStyle;

@end
