
@interface ATXHomeScreenLayoutSelectorPageState : NSObject {
    bool  _alreadySelectedASGWidgetForTopOfStack;
    ATXHomeScreenPage * _pageConfig;
    NSMutableArray * _suggestionsAlreadyAssignedToPageToDedupeAgainst;
    NSMutableArray * _suggestionsToExcludeFromAppPredictionPanel;
    NSMutableArray * _unfilledSGWidgets;
}

@property (nonatomic) bool alreadySelectedASGWidgetForTopOfStack;
@property (nonatomic, retain) ATXHomeScreenPage *pageConfig;
@property (nonatomic, retain) NSMutableArray *suggestionsAlreadyAssignedToPageToDedupeAgainst;
@property (nonatomic, retain) NSMutableArray *suggestionsToExcludeFromAppPredictionPanel;
@property (nonatomic, retain) NSMutableArray *unfilledSGWidgets;

- (void).cxx_destruct;
- (bool)alreadySelectedASGWidgetForTopOfStack;
- (id)pageConfig;
- (void)setAlreadySelectedASGWidgetForTopOfStack:(bool)arg1;
- (void)setPageConfig:(id)arg1;
- (void)setSuggestionsAlreadyAssignedToPageToDedupeAgainst:(id)arg1;
- (void)setSuggestionsToExcludeFromAppPredictionPanel:(id)arg1;
- (void)setUnfilledSGWidgets:(id)arg1;
- (id)suggestionsAlreadyAssignedToPageToDedupeAgainst;
- (id)suggestionsToExcludeFromAppPredictionPanel;
- (id)unfilledSGWidgets;

@end
