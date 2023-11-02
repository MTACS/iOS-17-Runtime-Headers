
@interface ICNotePreviewController : ICNAViewController <ICNotePreviewing, UITextViewDelegate> {
    ICNote * _note;
    ICSearchResult * _searchResult;
    ICTextController * _textController;
    ICTextView * _textView;
}

@property (nonatomic, readonly) NotesBackgroundView *backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, retain) ICSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, retain) ICTextController *textController;
@property (nonatomic, retain) ICTextView *textView;

- (void).cxx_destruct;
- (void)addPasswordEntryViewController;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)backgroundView;
- (id)createTextViewUsingTextController:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(bool)arg2;
- (void)dealloc;
- (id)initWithNote:(id)arg1;
- (id)initWithNote:(id)arg1 searchResult:(id)arg2;
- (id)note;
- (void)scrollToSearchResultIfNeeded;
- (id)searchResult;
- (void)setNote:(id)arg1;
- (void)setSearchResult:(id)arg1;
- (void)setTextController:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setupPreview;
- (void)setupPreviewWithInitialFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldForceLightContent;
- (id)textController;
- (id)textView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForceLightContentIfNecessary;
- (void)viewDidLoad;

@end
