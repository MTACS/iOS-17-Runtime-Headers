
@interface EKUIConfirmMultiPasteViewController : UIViewController <CUIKPasteboardManagerPasteDelegate, UIAdaptivePresentationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSDate * _dateForPaste;
    <EKUIConfirmMultiPasteViewControllerDelegate> * _delegate;
    UILabel * _descriptionLabel;
    EKEventStore * _eventStore;
    CUIKPasteboardManager * _pasteboardManager;
    EKAutocompleteSearchResult * _searchResult;
    EKCalendar * _selectedCalendar;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <EKUIConfirmMultiPasteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_done:(id)arg1;
- (id)delegate;
- (id)editorForPasteboardManager:(id)arg1;
- (id)initWithSearchResult:(id)arg1 pasteboardManager:(id)arg2 eventStore:(id)arg3 dateForPaste:(id)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pasteboardManager:(id)arg1 beginEditingEvent:(id)arg2;
- (void)pasteboardManager:(id)arg1 didFinishPasteWithResult:(unsigned long long)arg2 willOpenEditor:(bool)arg3;
- (void)pasteboardManager:(id)arg1 presentAlert:(id)arg2;
- (id)popupMenu:(id)arg1;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
