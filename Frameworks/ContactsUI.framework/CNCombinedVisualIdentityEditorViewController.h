
@interface CNCombinedVisualIdentityEditorViewController : UIViewController <CNVisualIdentityAvatarStyleEditorViewControllerDelegate> {
    CNPhotoPickerDataSource * _dataSource;
    <CNVisualIdentityItemEditorViewControllerDelegate> * _delegate;
    CNVisualIdentityAvatarStyleEditorViewController * _emojiEditor;
    UISegmentedControl * _segmentedControl;
    CNVisualIdentityAvatarStyleEditorViewController * _selectedEditor;
    CNVisualIdentityAvatarStyleEditorViewController * _textEditor;
}

@property (nonatomic, retain) CNPhotoPickerDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNVisualIdentityItemEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNVisualIdentityAvatarStyleEditorViewController *emojiEditor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, retain) CNVisualIdentityAvatarStyleEditorViewController *selectedEditor;
@property (readonly) Class superclass;
@property (nonatomic, retain) CNVisualIdentityAvatarStyleEditorViewController *textEditor;

+ (id)log;

- (void).cxx_destruct;
- (id)_newStyleEditorWithItem:(id)arg1;
- (void)_segmentedControlDidChange:(id)arg1;
- (void)_updateEditorsVisibility;
- (void)avatarStyleEditor:(id)arg1 didUpdateItem:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (void)didTapCancel;
- (void)didTapDone;
- (id)emojiEditor;
- (id)initWithProviderItem:(id)arg1 dataSource:(id)arg2;
- (id)segmentedControl;
- (id)selectedEditor;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojiEditor:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSelectedEditor:(id)arg1;
- (void)setTextEditor:(id)arg1;
- (void)setupBarButtonItems;
- (void)setupEditors;
- (void)setupSegmentedControl;
- (id)textEditor;
- (void)updateDoneButtonEnabledState;
- (id)updatedProviderItem;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
