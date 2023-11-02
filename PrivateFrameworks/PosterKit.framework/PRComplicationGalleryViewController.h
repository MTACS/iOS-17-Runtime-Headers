
@interface PRComplicationGalleryViewController : UIViewController <PRComplicationGalleryItemViewDelegate, PRComplicationGalleryViewDelegate, PRComplicationGalleryWidgetHostProviding, SBHAddWidgetSheetViewControllerDelegate, SBHWidgetDragHandling, SBRecycledViewsContainerProviding, UICollectionViewDelegate, UISheetPresentationControllerDelegate> {
    NSArray * _applicationWidgetCollections;
    PRComplicationGalleryView * _complicationGalleryView;
    UICollectionViewDiffableDataSource * _dataSource;
    <PRComplicationGalleryViewControllerDelegate> * _delegate;
    PRWidgetIconViewProvider * _iconViewProvider;
    UIView * _recycledViewsContainerView;
    NSArray * _suggestionSets;
    NSMutableDictionary * _widgetHostViewControllersPerReason;
}

@property (nonatomic, retain) NSArray *applicationWidgetCollections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PRComplicationGalleryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *recycledViewsContainer;
@property (nonatomic, retain) UIView *recycledViewsContainerView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SBHWidgetDragHandling> *widgetDragHandler;

- (void).cxx_destruct;
- (id)_buildSnapshot;
- (void)_closeButtonTapped:(id)arg1;
- (void)_configureWidgetCell:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_configureWidgetHostViewController:(id)arg1 forWidgetDescriptor:(id)arg2;
- (id)_galleryItemForComplicationDescriptor:(id)arg1 iconImageHidden:(bool)arg2;
- (id)_galleryItemForWidgetDescriptor:(id)arg1 family:(long long)arg2 iconImageHidden:(bool)arg3;
- (id)_galleryItemsForWidgetDescriptors:(id)arg1 iconImageHidden:(bool)arg2;
- (id)_widgetHostViewControllerForDescriptor:(id)arg1;
- (id)_widgetHostViewControllerForDescriptor:(id)arg1 forReason:(id)arg2;
- (void)addWidgetSheetViewController:(id)arg1 didSelectWidgetIconView:(id)arg2;
- (void)addWidgetSheetViewControllerDidAppear:(id)arg1;
- (void)addWidgetSheetViewControllerDidCancel:(id)arg1;
- (void)addWidgetSheetViewControllerDidDisappear:(id)arg1;
- (void)addWidgetSheetViewControllerWillAppear:(id)arg1;
- (void)addWidgetSheetViewControllerWillDisappear:(id)arg1;
- (id)applicationWidgetCollections;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)complicationGalleryItemView:(id)arg1 didBeginDragInteraction:(id)arg2;
- (void)complicationGalleryItemView:(id)arg1 didEndDragInteraction:(id)arg2 withOperation:(unsigned long long)arg3;
- (id)delegate;
- (void)didBeginDraggingWidgetIcon:(id)arg1;
- (void)didEndDraggingWidgetIcon:(id)arg1;
- (id)initWithSuggestionSets:(id)arg1 applicationWidgetCollections:(id)arg2;
- (void)invalidateWidgetHostViewControllersForReason:(id)arg1;
- (long long)layoutStyleForSectionIndex:(long long)arg1;
- (void)loadView;
- (void)presentationControllerWillDismiss:(id)arg1;
- (id)recycledViewsContainer;
- (id)recycledViewsContainerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setApplicationWidgetCollections:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecycledViewsContainerView:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (id)widgetDragHandler;
- (id)widgetHostViewControllerForDescriptor:(id)arg1 forReason:(id)arg2;
- (id)widgetHostViewControllersForReason:(id)arg1;
- (id)widgetIconForDescriptor:(id)arg1 sizeClass:(long long)arg2;
- (id)widgetIconForDescriptors:(id)arg1 sizeClass:(long long)arg2;
- (id)widgetIconForGalleryItem:(id)arg1 sizeClass:(long long)arg2;

@end
