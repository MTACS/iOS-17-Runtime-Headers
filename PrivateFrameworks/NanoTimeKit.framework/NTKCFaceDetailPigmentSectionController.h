
@interface NTKCFaceDetailPigmentSectionController : NTKCFaceDetailEditOptionHorizontalSectionController <NTKCFaceDetailPigmentColorSliderCellDelegate, NTKCFaceDetailPigmentEditOptionCellDelegate> {
    NTKFaceColorPalette * _palette;
    UIViewController * _parentViewController;
    bool  _suppressActionRowUpdates;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NTKCFaceDetailEditOptionModifiedDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

+ (bool)hasSectionForFace:(id)arg1 forEditMode:(long long)arg2;

- (void).cxx_destruct;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (bool)_handleDidSelectOption:(id)arg1;
- (bool)_hasActionRow;
- (void)_presentPigmentPickerForSlot:(id)arg1;
- (Class)actionRowCellClass;
- (Class)editCellClass;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (id)optionAtIndex:(unsigned long long)arg1;
- (id)parentViewController;
- (void)pigmentColorSliderCell:(id)arg1 colorFractionChanged:(double)arg2 transiently:(bool)arg3 canceled:(bool)arg4;
- (void)pigmentEditOptionCellDidSelectAddOption:(id)arg1;
- (void)setParentViewController:(id)arg1;

@end
