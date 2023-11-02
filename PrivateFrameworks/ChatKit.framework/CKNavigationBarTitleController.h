
@interface CKNavigationBarTitleController : NSObject {
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKConversation * _conversation;
    <CKNavigationBarTitleControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteAllBarButtonItem;
    bool  _editing;
    _UINavigationBarTitleView * _titleView;
}

@property (nonatomic, readonly) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, readonly) UIBarButtonItem *cancelBarButtonItem;
@property (nonatomic, readonly) CKConversation *conversation;
@property (nonatomic) <CKNavigationBarTitleControllerDelegate> *delegate;
@property (nonatomic, readonly) UIBarButtonItem *deleteAllBarButtonItem;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, readonly) NSArray *leftBarButtonItems;
@property (nonatomic, readonly) NSArray *rightBarButtonItems;
@property (nonatomic, readonly) _UINavigationBarTitleView *titleView;

- (void).cxx_destruct;
- (id)_conversationList;
- (void)_editCancelButtonPressed;
- (void)_pressedAvatarView;
- (id)avatarPickerViewController;
- (id)cancelBarButtonItem;
- (id)conversation;
- (id)delegate;
- (id)deleteAllBarButtonItem;
- (id)initWithConversation:(id)arg1;
- (bool)isEditing;
- (id)leftBarButtonItems;
- (id)rightBarButtonItems;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (id)titleView;

@end
