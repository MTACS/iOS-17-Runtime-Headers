
@interface CNPosterPreviewViewController : UIViewController <ContactsUI.CNPosterPreviewViewDelegate> {
    _TtC10ContactsUI32CNPosterPreviewViewConfiguration * _configuration;
    CNContact * _contact;
    <CNPosterPreviewViewControllerDelegate> * _delegate;
    long long  _editingState;
}

@property (nonatomic, retain) _TtC10ContactsUI32CNPosterPreviewViewConfiguration *configuration;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) <CNPosterPreviewViewControllerDelegate> *delegate;
@property (nonatomic) long long editingState;

- (void).cxx_destruct;
- (id)backgroundColorFromPhotoPickerProviderItem:(id)arg1;
- (id)configuration;
- (id)contact;
- (id)delegate;
- (long long)editingState;
- (id)initWithPosterConfiguration:(id)arg1 fromProviderItem:(id)arg2 contact:(id)arg3 editingState:(long long)arg4 isEditingSNaP:(bool)arg5;
- (void)previewViewDidCreateWithPosterConfiguration:(id)arg1;
- (void)previewViewDidFinishWithPosterConfiguration:(id)arg1;
- (void)previewViewDidSelectUseDifferentPoster;
- (void)setConfiguration:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingState:(long long)arg1;
- (void)skipPosterSetup;
- (void)updateNavigationBar;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
