
@interface PRInlineComplicationGalleryViewController : UIViewController <CHSWidgetDescriptorProviderObserver, PRInlineComplicationGalleryViewDelegate, UICollectionViewDelegate> {
    bool  _alternateDateEnabled;
    PRInlineComplicationGalleryView * _complicationGalleryView;
    UICollectionViewDiffableDataSource * _dataSource;
    <PRInlineComplicationGalleryViewControllerDelegate> * _delegate;
    PRComplicationDescriptor * _selectedComplication;
    NSArray * _suggestionItems;
    NSMutableDictionary * _widgetHostViewControllers;
}

@property (getter=isAlternateDateEnabled, nonatomic, readonly) bool alternateDateEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRInlineComplicationGalleryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRComplicationDescriptor *selectedComplication;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alternateCalendarGalleryItem;
- (id)_alternateCalendarIdentifier;
- (id)_alternateDateString;
- (id)_buildSnapshot;
- (void)_closeButtonTapped:(id)arg1;
- (void)_configureWidgetCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_configureWidgetHostViewController:(id)arg1 forWidgetDescriptor:(id)arg2;
- (id)_dateGalleryItem;
- (id)_galleryItemForWidgetDescriptor:(id)arg1 intent:(id)arg2 family:(long long)arg3 iconImageHidden:(bool)arg4 suggestedComplication:(id)arg5;
- (id)_inlineGalleryItemsForWidgetDescriptors:(id)arg1 iconImageHidden:(bool)arg2 isSuggestion:(bool)arg3;
- (id)_makeSectionHeaderRegistration;
- (void)_setAlternateDateEnabled:(bool)arg1;
- (id)_widgetHostViewControllerForDescriptor:(id)arg1 shownAlongsideIcon:(bool)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)delegate;
- (void)descriptorsDidChangeForDescriptorProvider:(id)arg1;
- (id)initWithSuggestionSet:(id)arg1 selectedComplication:(id)arg2 alternateDateEnabled:(bool)arg3;
- (bool)isAlternateDateEnabled;
- (long long)layoutStyleForSectionIndex:(long long)arg1;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedComplication;
- (void)setDelegate:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
