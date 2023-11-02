
@interface HUAccessorySceneListContentViewController : HUSelectableServiceGridViewController <HUSceneEditorDelegate, HUServiceGridItemManagerDelegate> {
    NSString * _analyticsPresentationContext;
    unsigned long long  _contentSource;
    HFItem * _currentlyOpenedItem;
    <HUAccessorySceneListContentViewControllerDelegate> * _delegate;
    bool  _includeTopMargin;
    bool  _persistAddedSuggestions;
    unsigned long long  _selectionType;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, retain) NSString *analyticsPresentationContext;
@property (nonatomic, readonly) unsigned long long contentSource;
@property (nonatomic, retain) HFItem *currentlyOpenedItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUAccessorySceneListContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includeTopMargin;
@property (nonatomic, readonly) HUAccessorySceneListContentItemManager *itemManager;
@property (nonatomic) bool persistAddedSuggestions;
@property (nonatomic, readonly, copy) NSSet *selectedActionSetBuilders;
@property (nonatomic, readonly) unsigned long long selectionType;
@property (nonatomic, readonly, copy) HFItem<HFServiceLikeItem> *serviceLikeItem;
@property (readonly) Class superclass;

+ (id)computeNumberOfItemsToDisplayForContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;

- (void).cxx_destruct;
- (id)analyticsPresentationContext;
- (bool)canSelectItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)commitChangesToSelectedActionBuilders;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (unsigned long long)contentSource;
- (id)currentlyOpenedItem;
- (id)delegate;
- (void)didChangeSelection;
- (bool)includeTopMargin;
- (id)initWithServiceLikeItem:(id)arg1 contentSource:(unsigned long long)arg2 selectionType:(unsigned long long)arg3;
- (unsigned long long)itemTypeForItem:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (bool)persistAddedSuggestions;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (void)sceneEditor:(id)arg1 didCommitActionSet:(id)arg2;
- (id)selectedActionSetBuilders;
- (unsigned long long)selectionType;
- (id)serviceLikeItem;
- (void)setAnalyticsPresentationContext:(id)arg1;
- (void)setCurrentlyOpenedItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIncludeTopMargin:(bool)arg1;
- (void)setPersistAddedSuggestions:(bool)arg1;

@end
