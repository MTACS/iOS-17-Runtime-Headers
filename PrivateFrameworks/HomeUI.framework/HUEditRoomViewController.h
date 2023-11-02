
@interface HUEditRoomViewController : HUItemCollectionViewController <HUWallpaperEditingViewControllerDelegate, HUWallpaperPickerInlineViewControllerDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperThumbnailCellDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate> {
    <HUEditRoomViewControllerAddRoomDelegate> * _addRoomDelegate;
    UITextField * _editingTextField;
    <HUEditRoomViewControllerPresentationDelegate> * _presentationDelegate;
    HFRoomBuilder * _roomBuilder;
    HUEditRoomItemManager * _roomItemManager;
    UIBarButtonItem * _savedButtonBarItem;
    HUWallpaperPickerInlineViewController * _wallpaperPickerController;
    HUZoneModuleController * _zoneModuleController;
}

@property (nonatomic, readonly) <HUEditRoomViewControllerAddRoomDelegate> *addRoomDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UITextField *editingTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HUEditRoomViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic, readonly) HFRoomBuilder *roomBuilder;
@property (nonatomic) HUEditRoomItemManager *roomItemManager;
@property (nonatomic, retain) UIBarButtonItem *savedButtonBarItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) HUWallpaperPickerInlineViewController *wallpaperPickerController;
@property (nonatomic, retain) HUZoneModuleController *zoneModuleController;

- (void).cxx_destruct;
- (void)addButtonPressed:(id)arg1;
- (id)addRoomDelegate;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (id)editingTextField;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithRoomBuilder:(id)arg1 presentationDelegate:(id)arg2 addRoomDelegate:(id)arg3;
- (id)itemModuleControllers;
- (void)nameFieldTextChanged:(id)arg1;
- (void)presentWallpaperEditingViewControllerWithImage:(id)arg1 wallpaper:(id)arg2;
- (id)presentationDelegate;
- (id)roomBuilder;
- (id)roomItemManager;
- (id)savedButtonBarItem;
- (void)setEditingTextField:(id)arg1;
- (void)setRoomItemManager:(id)arg1;
- (void)setSavedButtonBarItem:(id)arg1;
- (void)setWallpaperPickerController:(id)arg1;
- (void)setZoneModuleController:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1;
- (void)updateTitle;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3;
- (id)wallpaperPickerController;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1;
- (void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (id)zoneModuleController;

@end
