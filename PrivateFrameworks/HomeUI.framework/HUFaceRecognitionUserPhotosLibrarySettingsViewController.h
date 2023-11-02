
@interface HUFaceRecognitionUserPhotosLibrarySettingsViewController : HUItemTableViewController <HUItemModuleControllerHosting, HUTappableTextViewDelegate> {
    HUFaceRecognitionUserPhotosLibrarySettingsItemManager * _photosLibrarySettingsItemManager;
    HUFaceRecognitionUserPhotosLibrarySettingsModuleController * _photosLibrarySettingsModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUFaceRecognitionUserPhotosLibrarySettingsItemManager *photosLibrarySettingsItemManager;
@property (nonatomic, retain) HUFaceRecognitionUserPhotosLibrarySettingsModuleController *photosLibrarySettingsModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithUserPhotosLibraryItem:(id)arg1;
- (id)itemModuleControllers;
- (id)photosLibrarySettingsItemManager;
- (id)photosLibrarySettingsModuleController;
- (void)setPhotosLibrarySettingsItemManager:(id)arg1;
- (void)setPhotosLibrarySettingsModuleController:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tappableTextView:(id)arg1 tappedAtIndex:(unsigned long long)arg2 withAttributes:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
