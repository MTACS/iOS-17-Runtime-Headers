
@interface AVTAvatarActionsProvider : NSObject {
    bool  _allowCreate;
    AVTAvatarRecord * _avatarRecord;
    UIAction * _createAction;
    AVTAvatarRecordDataSource * _dataSource;
    <AVTAvatarActionsModelDelegate> * _delegate;
    UIAction * _deleteAction;
    UIAction * _duplicateAction;
    UIAction * _editAction;
}

@property (nonatomic, readonly) bool allowCreate;
@property (nonatomic, retain) AVTAvatarRecord *avatarRecord;
@property (nonatomic, retain) UIAction *createAction;
@property (nonatomic, readonly) AVTAvatarRecordDataSource *dataSource;
@property (nonatomic) <AVTAvatarActionsModelDelegate> *delegate;
@property (nonatomic, retain) UIAction *deleteAction;
@property (nonatomic, retain) UIAction *duplicateAction;
@property (nonatomic, retain) UIAction *editAction;

+ (id)localizedTitleForActionType:(long long)arg1;
+ (unsigned long long)maximumNumberOfActions;

- (void).cxx_destruct;
- (bool)allowCreate;
- (id)avatarRecord;
- (bool)canPerformActionType:(long long)arg1;
- (id)createAction;
- (id)dataSource;
- (id)delegate;
- (id)deleteAction;
- (void)didTapCreateNew;
- (void)didTapDelete:(id)arg1;
- (void)didTapDuplicate;
- (void)didTapEdit;
- (id)duplicateAction;
- (id)editAction;
- (void)generateActions;
- (id)initWithAvatarRecord:(id)arg1 dataSource:(id)arg2 allowCreate:(bool)arg3;
- (void)setAvatarRecord:(id)arg1;
- (void)setCreateAction:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteAction:(id)arg1;
- (void)setDuplicateAction:(id)arg1;
- (void)setEditAction:(id)arg1;

@end
