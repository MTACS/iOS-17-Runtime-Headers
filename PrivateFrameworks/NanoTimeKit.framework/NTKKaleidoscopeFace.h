
@interface NTKKaleidoscopeFace : NTKFace {
    NSString * _cachedResourceDirectorySnapshotKey;
}

+ (id)_complicationSlotDescriptors;
+ (bool)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
+ (Class)_faceClassOfFaceWithRichComplicationSlotsForDevice:(id)arg1;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_sortableFaceOfStyle:(long long)arg1 withAssets:(id)arg2;
+ (id)sortableFaceWithAssets:(id)arg1;
+ (bool)supportsExternalAssets;

- (void).cxx_destruct;
- (bool)_createResourceDirectorySuitableForSharingAtPath:(id)arg1 error:(id*)arg2;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (Class)_optionClassForCustomEditMode:(long long)arg1 resourceDirectoryExists:(bool)arg2;
- (id)_resourceDirectorySnapshotKey;
- (bool)_sanitizeFaceConfiguration:(id*)arg1;
- (bool)_shouldIncludeResourceDirectoryForSharing;
- (bool)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (id)addFaceDetailViewController;
- (void)companionEditorWithAssets:(id)arg1 completion:(id /* block */)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editOptionThatHidesAllComplications;
- (bool)isUsingCustomAsset;
- (id)libraryDetailViewController;

@end
