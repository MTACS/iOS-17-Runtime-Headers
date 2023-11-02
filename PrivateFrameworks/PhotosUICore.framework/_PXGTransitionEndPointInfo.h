
@interface _PXGTransitionEndPointInfo : NSObject {
    <PXGItemPlacementController> * _itemPlacementController;
    id  _itemReference;
    PXGItemPlacement * _originalItemPlacement;
    PXGItemPlacementContext * _placementContext;
    PXGViewCoordinator * _tungstenViewCoordinator;
}

@property (nonatomic, retain) <PXGItemPlacementController> *itemPlacementController;
@property (nonatomic, retain) id itemReference;
@property (nonatomic, retain) PXGItemPlacement *originalItemPlacement;
@property (nonatomic, retain) PXGItemPlacementContext *placementContext;
@property (nonatomic, retain) PXGViewCoordinator *tungstenViewCoordinator;

- (void).cxx_destruct;
- (id)itemPlacementController;
- (id)itemReference;
- (id)originalItemPlacement;
- (id)placementContext;
- (void)setItemPlacementController:(id)arg1;
- (void)setItemReference:(id)arg1;
- (void)setOriginalItemPlacement:(id)arg1;
- (void)setPlacementContext:(id)arg1;
- (void)setTungstenViewCoordinator:(id)arg1;
- (id)tungstenViewCoordinator;

@end
