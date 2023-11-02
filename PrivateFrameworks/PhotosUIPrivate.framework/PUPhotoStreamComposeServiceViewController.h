
@interface PUPhotoStreamComposeServiceViewController : PXPhotoStreamComposeServiceViewController <PUCloudSharedCreateAlbumViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUPhotoStreamsAlbumsTableViewControllerDelegate, SLSheetViewHostProtocol> {
    NSArray * _actions;
    NSObject<PLAlbumContainer> * _albumList;
    struct { 
        unsigned int hasDidPost : 1; 
        unsigned int hasDidCancel : 1; 
    }  _delegateFlags;
    bool  _inCreateNewAlbum;
    NSString * _itemCountString;
    NSArray * _recipients;
    NSObject<PLAlbumProtocol> * _selectedAlbum;
    bool  _shouldShowPost;
    NSString * _startingContentText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *startingContentText;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_imageFromStreamShareSource:(id)arg1;
- (void)_pushTitleController;
- (id)albumListAction;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(bool)arg2;
- (void)controller:(id)arg1 didSelectAlbum:(id)arg2;
- (void)controllerWillCreateNewAlbum:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStartingContentText:(id)arg1;
- (bool)isContentValid;
- (void)send;
- (id)serviceIconImage;
- (void)setAssetsToShare:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSourcesToShare:(id)arg1;
- (id)sheetActions;
- (void)shouldShowNetworkActivityIndicator:(id)arg1;
- (id)startingContentText;
- (id)title;
- (void)titleController:(id)arg1 didSetTitle:(id)arg2;
- (void)titleControllerDidCancel:(id)arg1;
- (void)userDidCancel;
- (void)userDidPost;
- (void)viewDidLoad;

@end
