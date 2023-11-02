
@interface HomeUI.ActionSetContainerSummaryGridViewController : HUControllableItemCollectionViewController <HUSceneEditorDelegate> {
    void actionSetGridConfig;
    void module;
    void moduleController;
}

- (void).cxx_destruct;
- (bool)_hasTapActionForItem:(id)arg1;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;

@end
