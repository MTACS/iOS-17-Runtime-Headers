
@interface NTKBasePhotoFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (bool)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;

- (bool)_allowsEditing;
- (id)_localizedNameForComplicationSlot:(id)arg1;

@end
