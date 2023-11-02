
@interface NTKCFaceDetailEditOptionSectionController : NTKCFaceDetailSectionController {
    NTKCFaceDetailRowActionCell * _actionRow;
    NTKEditOptionCollection * _collection;
    <NTKCFaceDetailEditOptionSectionDelegate> * _delegate;
    Class  _editCellClass;
    NTKFaceView * _faceView;
    NSDictionary * _selectedOptions;
}

@property (nonatomic, retain) NTKCFaceDetailRowActionCell *actionRow;
@property (nonatomic, readonly) Class actionRowCellClass;
@property (nonatomic, retain) NTKEditOptionCollection *collection;
@property (nonatomic) <NTKCFaceDetailEditOptionSectionDelegate> *delegate;
@property (nonatomic, readonly) Class editCellClass;
@property (nonatomic) NTKFaceView *faceView;
@property (nonatomic, retain) NSDictionary *selectedOptions;

- (void).cxx_destruct;
- (id)_actionNameForOption:(id)arg1;
- (bool)_canDisplayActionRowForCustomEditMode:(long long)arg1 andOption:(id)arg2;
- (bool)_canSelectRow:(long long)arg1;
- (void)_createActionRow;
- (void)_customizeActionRow:(id)arg1 withEditOption:(id)arg2;
- (bool)_handleDidSelectActionRowForOption:(id)arg1;
- (bool)_handleDidSelectOption:(id)arg1;
- (bool)_hasActionRow;
- (id)_initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (void)_refreshActionRowContent;
- (void)_updateSelectedOptions;
- (id)actionRow;
- (Class)actionRowCellClass;
- (id)collection;
- (bool)collectionChanged:(id)arg1 withSelectedOptions:(id)arg2;
- (id)delegate;
- (Class)editCellClass;
- (void)faceDidChange;
- (id)faceView;
- (id)initWithTableViewController:(id)arg1 face:(id)arg2 inGallery:(bool)arg3 editOptionCollection:(id)arg4 faceView:(id)arg5;
- (id)optionAtIndex:(unsigned long long)arg1;
- (void)reloadActionRow;
- (id)selectedOptions;
- (void)setActionRow:(id)arg1;
- (void)setCollection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setSelectedOptions:(id)arg1;

@end
