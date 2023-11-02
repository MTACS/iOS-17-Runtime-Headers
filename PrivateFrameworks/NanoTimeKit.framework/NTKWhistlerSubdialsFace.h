
@interface NTKWhistlerSubdialsFace : NTKFace <NTKFaceComplicationPreviewable> {
    bool  _isGossamerPigmentEditOptionProvider;
    NTKPigmentEditOptionProvider * _pigmentEditOptionProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_complicationSlotDescriptors;
+ (id)_defaultSelectedComplicationSlotForDevice:(id)arg1;
+ (id)_initialDefaultComplicationForSlot:(id)arg1 forDevice:(id)arg2;
+ (id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2;
+ (id)_orderedComplicationSlots;
+ (id)_richComplicationSlotsForDevice:(id)arg1;
+ (id)pigmentFaceDomain;

- (void).cxx_destruct;
- (id)_customEditModes;
- (id)_defaultBackgroundOption;
- (id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (Class)_optionClassForCustomEditMode:(long long)arg1;
- (void)applyPreviewConfigurationWithFamily:(long long)arg1 faceColor:(long long)arg2;
- (id)pigmentOptionProvider;
- (bool)requiresPigmentEditOption;
- (void)selectOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (long long)timeStyle;

@end
