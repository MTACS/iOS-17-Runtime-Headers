
@interface PUCloudSharedCreateAlbumViewController : UIViewController {
    NSArray * __albumRecipients;
    PUPhotoStreamRecipientViewController * _composeRecipientController;
    <PUCloudSharedCreateAlbumViewControllerDelegate> * _delegate;
    UINavigationItem * _navItem;
    NSString * _nextButtonTitle;
}

@property (setter=_setAlbumRecipients:, nonatomic, retain) NSArray *_albumRecipients;
@property (nonatomic, readonly) NSArray *albumRecipients;
@property (nonatomic) <PUCloudSharedCreateAlbumViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSString *nextButtonTitle;

- (void).cxx_destruct;
- (id)_albumRecipients;
- (void)_cancelAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_handleCompletionWithSuccess:(bool)arg1;
- (void)_saveUserEnterredInfo;
- (void)_setAlbumRecipients:(id)arg1;
- (bool)_validateRecipientsToAdd:(id)arg1;
- (id)albumRecipients;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)loadView;
- (id)navigationItem;
- (id)nextButtonTitle;
- (void)setDelegate:(id)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

@end
