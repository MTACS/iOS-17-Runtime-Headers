
@interface PXGMultiplexedItemPlacementController : NSObject <PXGItemPlacementController, PXGItemPlacementController_Internal> {
    bool  _isIndirectItemPlacementController;
    NSArray * _itemPlacementControllers;
    <PXGItemPlacementController> * _mainItemPlacementController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIndirectItemPlacementController;
@property (nonatomic, readonly) NSArray *itemPlacementControllers;
@property (nonatomic, readonly) <PXGItemPlacementController> *mainItemPlacementController;
@property (readonly) Class superclass;

+ (id)itemPlacementControllerForItemPlacementControllers:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithItemPlacementControllers:(id)arg1;
- (bool)isIndirectItemPlacementController;
- (id)itemPlacementControllers;
- (id)mainItemPlacementController;
- (id)placementInContext:(id)arg1 forItemReference:(id)arg2;
- (void)setPlacementOverride:(id)arg1 forItemReference:(id)arg2;

@end
