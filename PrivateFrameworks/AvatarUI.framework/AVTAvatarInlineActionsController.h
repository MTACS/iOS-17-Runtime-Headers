
@interface AVTAvatarInlineActionsController : NSObject <AVTAvatarActionsController, AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate> {
    AVTAvatarActionsProvider * _actionsModel;
    AVTViewSessionProvider * _avtViewSessionProvider;
    bool  _buttonsDisabled;
    AVTAvatarRecordDataSource * _dataSource;
    <AVTAvatarActionsControllerDelegate> * _delegate;
    AVTAvatarEditorViewController * _editorViewController;
    AVTUIEnvironment * _environment;
    NSArray * _inlineActionButtons;
    bool  _isCreatingAvatar;
    bool  _shouldHideUserInfoView;
}

@property (nonatomic, retain) AVTAvatarActionsProvider *actionsModel;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic) bool buttonsDisabled;
@property (nonatomic, retain) AVTAvatarRecordDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVTAvatarEditorViewController *editorViewController;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inlineActionButtons;
@property (nonatomic) bool isCreatingAvatar;
@property (nonatomic) bool shouldHideUserInfoView;
@property (readonly) Class superclass;

+ (id)buttonForAction:(id)arg1;

- (void).cxx_destruct;
- (id)actionsModel;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avtViewSessionProvider;
- (bool)buttonsDisabled;
- (void)confirmShouldDeleteRecord:(id)arg1 sender:(id)arg2 resultBlock:(id /* block */)arg3;
- (id)dataSource;
- (id)delegate;
- (id)editorViewController;
- (id)environment;
- (id)initWithDataSource:(id)arg1 avtViewProvider:(id)arg2 environment:(id)arg3;
- (id)inlineActionButtons;
- (bool)isCreatingAvatar;
- (void)performCreateForActionsModel:(id)arg1;
- (void)performDeleteForActionsModel:(id)arg1;
- (void)performDuplicateForActionsModel:(id)arg1;
- (void)performEdit;
- (void)performEditForActionsModel:(id)arg1;
- (void)presentEditor:(id)arg1 forCreating:(bool)arg2;
- (void)setActionsModel:(id)arg1;
- (void)setButtonsDisabled:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorViewController:(id)arg1;
- (void)setInlineActionButtons:(id)arg1;
- (void)setIsCreatingAvatar:(bool)arg1;
- (void)setShouldHideUserInfoView:(bool)arg1;
- (bool)shouldHideUserInfoView;
- (void)updateForChangedContentCategorySize;
- (void)updateWithActionsModel:(id)arg1;

@end
