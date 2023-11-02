
@interface NTKBasePhotosFace : NTKFace {
    NSString * _cachedResourceDirectorySnapshotKey;
}

+ (id)_complicationSlotDescriptors;
+ (bool)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;

- (void).cxx_destruct;
- (bool)_allowsEditing;
- (bool)_createResourceDirectorySuitableForSharingAtPath:(id)arg1 error:(id*)arg2;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (void)_migrateLegibility;
- (id)_resourceDirectorySnapshotKey;
- (bool)_sanitizeFaceConfiguration:(id*)arg1;
- (bool)_shouldSanitizeFaceConfigurationWhenAddingSharedFace;
- (void)_updateForResourceDirectoryChange:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
