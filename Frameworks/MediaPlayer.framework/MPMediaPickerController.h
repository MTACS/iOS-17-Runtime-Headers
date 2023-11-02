
@interface MPMediaPickerController : UIViewController <MPMusicMediaPickerClientController> {
    MPMediaPickerConfiguration * _configuration;
    <MPMediaPickerControllerDelegate> * _delegate;
    <MPMediaPickerRemoteViewLoader> * _loader;
}

@property (nonatomic) bool allowsPickingMultipleItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPMediaPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <MPMediaPickerRemoteViewLoader> *loader;
@property (nonatomic, readonly) unsigned long long mediaTypes;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) bool showsCloudItems;
@property (nonatomic) bool showsItemsWithProtectedAssets;
@property (readonly) Class superclass;

+ (void)preheatMediaPicker;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (bool)_canShowWhileLocked;
- (void)_checkLibraryAuthorization;
- (void)_forceDismissal;
- (bool)_hasAddedRemoteView;
- (void)_pickerDidCancel;
- (void)_pickerDidPickItems:(id)arg1;
- (void)_pickerDidPickPlaybackArchive:(id)arg1;
- (long long)_preferredModalPresentationStyle;
- (void)_resetRemoteViewController;
- (void)_sharedInit;
- (void)_synchronizeSettings;
- (bool)allowsPickingMultipleItems;
- (id)configuration;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithMediaTypes:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSupportedTypeIdentifiers:(id)arg1 selectionMode:(long long)arg2;
- (id)loader;
- (unsigned long long)mediaTypes;
- (long long)modalPresentationStyle;
- (bool)pickingForExternalPlayer;
- (bool)picksSingleCollectionEntity;
- (id)playbackArchiveConfiguration;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)prompt;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:(id)arg1;
- (void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1;
- (long long)selectionMode;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLoader:(id)arg1;
- (void)setPickingForExternalPlayer:(bool)arg1;
- (void)setPicksSingleCollectionEntity:(bool)arg1;
- (void)setPlaybackArchiveConfiguration:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setShowsCatalogContent:(bool)arg1;
- (void)setShowsCloudItems:(bool)arg1;
- (void)setShowsItemsWithProtectedAssets:(bool)arg1;
- (void)setShowsLibraryContent:(bool)arg1;
- (void)setSupportsUnavailableContent:(bool)arg1;
- (void)setWatchCompatibilityVersion:(unsigned int)arg1;
- (bool)showsCatalogContent;
- (bool)showsCloudItems;
- (bool)showsItemsWithProtectedAssets;
- (bool)showsLibraryContent;
- (unsigned long long)supportedInterfaceOrientations;
- (bool)supportsUnavailableContent;
- (id)typeIdentifiers;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (unsigned int)watchCompatibilityVersion;
- (void)willMoveToParentViewController:(id)arg1;

@end
