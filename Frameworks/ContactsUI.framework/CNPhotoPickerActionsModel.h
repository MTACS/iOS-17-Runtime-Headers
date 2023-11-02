
@interface CNPhotoPickerActionsModel : NSObject {
    NSString * _assignActionTitleOverride;
    bool  _buttonsDisabled;
    bool  _canDelete;
    NSArray * _currentInlineActionButtons;
    <CNPhotoPickerActionsDelegate> * _delegate;
    CNPhotoPickerActionButton * _deleteButton;
    NSIndexPath * _indexPath;
    CNPhotoPickerProviderItem * _providerItem;
}

@property (nonatomic, retain) NSString *assignActionTitleOverride;
@property (nonatomic) bool buttonsDisabled;
@property (nonatomic) bool canDelete;
@property (nonatomic, retain) NSArray *currentInlineActionButtons;
@property (nonatomic) <CNPhotoPickerActionsDelegate> *delegate;
@property (nonatomic, retain) CNPhotoPickerActionButton *deleteButton;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) NSArray *inlineActionButtons;
@property (nonatomic, retain) CNPhotoPickerProviderItem *providerItem;

+ (bool)actionIsDestructive:(long long)arg1;
+ (id)buttonForActionType:(long long)arg1 titleOverride:(id)arg2 withActionBlock:(id /* block */)arg3;
+ (id)buttonForActionType:(long long)arg1 withActionBlock:(id /* block */)arg2;
+ (id)localizedTitleForActionType:(long long)arg1;
+ (unsigned long long)maximumNumberOfButtons;

- (void).cxx_destruct;
- (id)assignActionTitleOverride;
- (bool)buttonsDisabled;
- (bool)canDelete;
- (bool)canPerformActionType:(long long)arg1;
- (id)currentInlineActionButtons;
- (id)delegate;
- (id)deleteButton;
- (void)didTapAssignToContact;
- (void)didTapDelete;
- (void)didTapDuplicate;
- (void)didTapEdit;
- (id)generateInlineActionButtons;
- (id)indexPath;
- (id)initWithProviderItem:(id)arg1 assignActionTitleOverride:(id)arg2 canDelete:(bool)arg3 atIndexPath:(id)arg4;
- (id)inlineActionButtons;
- (id)providerItem;
- (void)setAssignActionTitleOverride:(id)arg1;
- (void)setButtonsDisabled:(bool)arg1;
- (void)setCanDelete:(bool)arg1;
- (void)setCurrentInlineActionButtons:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setProviderItem:(id)arg1;
- (void)updateProviderItem:(id)arg1;

@end
