
@interface PXGOtherItemPlacementController : NSObject <PXGItemPlacementController, PXGItemPlacementController_Internal> {
    <PXGItemPlacementController> * _originalItemPlacementController;
    id  _originalItemReference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isIndirectItemPlacementController;
@property (nonatomic, readonly) <PXGItemPlacementController> *originalItemPlacementController;
@property (nonatomic, readonly) id originalItemReference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginalItemPlacementController:(id)arg1 originalItemReference:(id)arg2;
- (bool)isIndirectItemPlacementController;
- (id)originalItemPlacementController;
- (id)originalItemReference;
- (id)placementInContext:(id)arg1 forItemReference:(id)arg2;
- (void)setPlacementOverride:(id)arg1 forItemReference:(id)arg2;

@end
