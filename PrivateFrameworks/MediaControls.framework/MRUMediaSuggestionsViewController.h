
@interface MRUMediaSuggestionsViewController : UIViewController <UICollectionViewDelegate> {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentEdgeInsets;
    UICollectionViewDiffableDataSource * _dataSource;
    <MRUMediaSuggestionsViewControllerDelegate> * _delegate;
    long long  _layout;
    NSArray * _mediaSuggestions;
    MRUVisualStylingProvider * _stylingProvider;
    NSDictionary * _suggestions;
    bool  _supportsHorizontalLayout;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentEdgeInsets;
@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUMediaSuggestionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layout;
@property (nonatomic, retain) NSArray *mediaSuggestions;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (nonatomic, retain) NSDictionary *suggestions;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsHorizontalLayout;
@property (nonatomic, retain) MRUMediaSuggestionsView *view;
@property (nonatomic, retain) MRUMediaSuggestionsView *viewIfLoaded;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentEdgeInsets;
- (id)dataSource;
- (id)delegate;
- (id)initWithMediaSuggestions:(id)arg1;
- (long long)layout;
- (void)loadView;
- (id)mediaSuggestions;
- (void)setContentEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayout:(long long)arg1;
- (void)setMediaSuggestions:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setSuggestions:(id)arg1;
- (void)setSupportsHorizontalLayout:(bool)arg1;
- (id)stylingProvider;
- (id)suggestions;
- (bool)supportsHorizontalLayout;
- (void)updateCell:(id)arg1 forIdentifier:(id)arg2;
- (void)updateSuggestionsAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
