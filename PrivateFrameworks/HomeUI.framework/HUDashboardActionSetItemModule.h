
@interface HUDashboardActionSetItemModule : HFItemModule <HFItemHiding, HFPredictionsManagerDelegate> {
    HFActionSetItemProvider * _actionSetItemProvider;
    HUDashboardContext * _context;
    NAFuture * _initialPredictionUpdateFuture;
    HFPredictedActionSetItemProvider * _predictedActionSetItemProvider;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HFActionSetItemProvider *actionSetItemProvider;
@property (nonatomic, retain) HUDashboardContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *initialPredictionUpdateFuture;
@property (nonatomic, retain) HFPredictedActionSetItemProvider *predictedActionSetItemProvider;
@property (nonatomic, readonly) NSSet *predictedActionSetItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id /* block */)_itemComparator;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_reorderableHomeKitItemListKey;
- (void)_updateFilters;
- (id)actionSetItemProvider;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)context;
- (id)initWithContext:(id)arg1 itemUpdater:(id)arg2;
- (id)initialPredictionUpdateFuture;
- (id)predictedActionSetItemProvider;
- (id)predictedActionSetItems;
- (void)predictionsManagerDidUpdatePredictions:(id)arg1;
- (void)setActionSetItemProvider:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setInitialPredictionUpdateFuture:(id)arg1;
- (void)setPredictedActionSetItemProvider:(id)arg1;
- (void)setValueSource:(id)arg1;
- (bool)showPredictedScenes;
- (bool)supportsReorderingForItem:(id)arg1;
- (id)valueSource;

@end
