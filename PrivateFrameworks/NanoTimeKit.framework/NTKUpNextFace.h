
@interface NTKUpNextFace : NTKFace

+ (id)_complicationSlotDescriptors;
+ (Class)_faceClassOfFaceWithRichComplicationSlotsForDevice:(id)arg1;
+ (id)_orderedComplicationSlots;
+ (id)pigmentFaceDomain;

- (long long)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (bool)_hasOptionsForCustomEditMode:(long long)arg1;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (bool)requiresPigmentEditOption;
- (long long)timeStyle;

@end
