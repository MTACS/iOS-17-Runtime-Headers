
@interface AVTAvatarActionsMenuController : NSObject <AVTAvatarActionsController, AVTAvatarActionsModelDelegate, AVTAvatarEditorViewControllerDelegate> {
    UIMenu * _actionsMenu;
    AVTAvatarActionsProvider * _actionsModel;
    AVTViewSessionProvider * _avtViewSessionProvider;
    AVTAvatarRecordDataSource * _dataSource;
    <AVTAvatarActionsControllerDelegate> * _delegate;
    AVTAvatarEditorViewController * _editorViewController;
    AVTUIEnvironment * _environment;
    bool  _isCreatingAvatar;
}

@property (nonatomic, retain) UIMenu *actionsMenu;
@property (nonatomic, retain) AVTAvatarActionsProvider *actionsModel;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic, retain) AVTAvatarRecordDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarActionsControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AVTAvatarEditorViewController *editorViewController;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCreatingAvatar;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)actionsMenu;
- (id)actionsModel;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avtViewSessionProvider;
- (void)confirmShouldDeleteRecord:(id)arg1 resultBlock:(id /* block */)arg2;
- (id)dataSource;
- (id)delegate;
- (id)editorViewController;
- (id)environment;
- (id)initWithDataSource:(id)arg1 avtViewProvider:(id)arg2 environment:(id)arg3;
- (bool)isCreatingAvatar;
- (void)performCreateForActionsModel:(id)arg1;
- (void)performDeleteForActionsModel:(id)arg1;
- (void)performDuplicateForActionsModel:(id)arg1;
- (void)performEditForActionsModel:(id)arg1;
- (void)presentEditor:(id)arg1 forCreating:(bool)arg2;
- (void)setActionsMenu:(id)arg1;
- (void)setActionsModel:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditorViewController:(id)arg1;
- (void)setIsCreatingAvatar:(bool)arg1;
- (void)updateForChangedContentCategorySize;
- (void)updateWithActionsModel:(id)arg1;

@end
