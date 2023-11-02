
@interface HUFaceRecognitionLibraryListViewController : HUItemTableViewController <HUFaceRecognitionPersonEditorViewControllerDelegate, HUSwitchCellDelegate, HUTappableTextViewDelegate, UITextViewDelegate> {
    HUFaceRecognitionLibraryListItemManager * _listItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HUFaceRecognitionLibraryListItemManager *listItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)dealloc;
- (void)dismissTextViewController;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)listItemManager;
- (void)personEditorViewController:(id)arg1 didUpdateItem:(id)arg2;
- (id)presentFaceRecognitionAddPersonSettingsForUnknownPersonEvent:(id)arg1 animated:(bool)arg2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(bool)arg3;
- (void)setListItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)trailingSwipeActionsForItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
