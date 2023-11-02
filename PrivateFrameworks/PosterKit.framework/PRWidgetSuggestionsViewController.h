
@interface PRWidgetSuggestionsViewController : UIViewController <PRSidebarWidgetSuggestionsCollectionViewLayoutDelegate, SBHWidgetWrapperViewControllerDelegate, UICollectionViewDelegate> {
    UICollectionViewDiffableDataSource * _dataSource;
    <PRWidgetSuggestionsViewControllerDelegate> * _delegate;
    <SBIconViewProviding> * _iconViewProvider;
    <SBIconListLayoutProvider> * _listLayoutProvider;
    NSArray * _suggestionSets;
    bool  _usingSidebarLayout;
    <SBHWidgetDragHandling> * _widgetDragHandler;
    PRWidgetSuggestionsView * _widgetSuggestionsView;
}

@property (nonatomic, retain) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRWidgetSuggestionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SBIconViewProviding> *iconViewProvider;
@property (nonatomic, retain) <SBIconListLayoutProvider> *listLayoutProvider;
@property (nonatomic, retain) NSArray *suggestionSets;
@property (readonly) Class superclass;
@property (nonatomic) bool usingSidebarLayout;
@property (nonatomic, readonly) <SBHWidgetDragHandling> *widgetDragHandler;
@property (nonatomic, retain) PRWidgetSuggestionsView *widgetSuggestionsView;

- (void).cxx_destruct;
- (void)_configureWidgetCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (id)_galleryItemForComplicationDescriptor:(id)arg1 iconImageHidden:(bool)arg2;
- (id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)arg1;
- (id)complicationDescriptorForItemAtIndexPath:(id)arg1;
- (void)configureBackgroundView:(id)arg1 matchingMaterialBeneathWrapperViewController:(id)arg2;
- (id)dataSource;
- (id)delegate;
- (void)iconTapped:(id)arg1;
- (id)iconViewProvider;
- (id)initWithSuggestionSets:(id)arg1 listLayoutProvider:(id)arg2 iconViewProvider:(id)arg3 widgetDragHandler:(id)arg4 usingSidebarLayout:(bool)arg5;
- (id)listLayoutProvider;
- (void)loadView;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconViewProvider:(id)arg1;
- (void)setListLayoutProvider:(id)arg1;
- (void)setSuggestionSets:(id)arg1;
- (void)setUsingSidebarLayout:(bool)arg1;
- (void)setWidgetSuggestionsView:(id)arg1;
- (id)suggestionSets;
- (bool)usingSidebarLayout;
- (void)viewDidLoad;
- (id)widgetDragHandler;
- (id)widgetSuggestionsView;

@end
