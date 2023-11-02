
@interface CNPosterEditOptionsViewController : UIViewController <ContactsUI.CNAvatarPosterPairCollectionViewControllerDelegate> {
    _TtC10ContactsUI31CNPosterEditorViewConfiguration * _configuration;
    CNContact * _contact;
    CNContact * _contactForSharedProfile;
    <CNPosterEditOptionsViewControllerDelegate> * _delegate;
    long long  _mode;
    CNContactImage * _pendingAvatar;
    CNContactPoster * _pendingPoster;
}

@property (nonatomic, retain) _TtC10ContactsUI31CNPosterEditorViewConfiguration *configuration;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContact *contactForSharedProfile;
@property (nonatomic) <CNPosterEditOptionsViewControllerDelegate> *delegate;
@property (nonatomic) long long mode;
@property (nonatomic, retain) CNContactImage *pendingAvatar;
@property (nonatomic, retain) CNContactPoster *pendingPoster;

- (void).cxx_destruct;
- (void)avatarPosterPairCollectionDidConfirmSelection;
- (void)avatarPosterPairCollectionDidEditPoster:(id)arg1;
- (void)avatarPosterPairCollectionDidSelectCreateNew;
- (void)avatarPosterPairCollectionDidSelectEditAvatar:(id)arg1;
- (void)avatarPosterPairCollectionDidSelectWithAvatar:(id)arg1 poster:(id)arg2 didChange:(bool)arg3 isShared:(bool)arg4;
- (void)avatarPosterPairCollectionDidTapDismiss;
- (id)configuration;
- (id)contact;
- (id)contactForSharedProfile;
- (id)delegate;
- (id)initWithContact:(id)arg1 mode:(long long)arg2;
- (long long)mode;
- (id)pendingAvatar;
- (id)pendingPoster;
- (void)posterEditOptionsDidCancel;
- (void)posterEditOptionsDidTapDone;
- (void)setConfiguration:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactForSharedProfile:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setPendingAvatar:(id)arg1;
- (void)setPendingPoster:(id)arg1;
- (void)viewDidLoad;

@end
