
@interface SFSharedAccountsGroupMessageInvitePreviewViewController : OBWelcomeController {
    <SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate> * _delegate;
    KCSharingGroup * _group;
    NSArray * _invitedGroupMemberData;
}

@property (nonatomic) <SFSharedAccountsGroupMessageInvitePreviewViewControllerDelegate> *delegate;
@property (nonatomic, readonly) KCSharingGroup *group;
@property (nonatomic, readonly) NSArray *invitedGroupMemberData;

- (void).cxx_destruct;
- (void)_addContinueAndCancelButtonsToButtonTray;
- (void)_cancelButtonSelected;
- (void)_continueButtonSelected;
- (void)_setUpContentView;
- (id)delegate;
- (id)group;
- (id)initWithGroup:(id)arg1 invitedGroupMemberData:(id)arg2;
- (id)invitedGroupMemberData;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
