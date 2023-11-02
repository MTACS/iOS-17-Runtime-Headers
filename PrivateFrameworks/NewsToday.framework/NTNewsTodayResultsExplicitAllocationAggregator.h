
@interface NTNewsTodayResultsExplicitAllocationAggregator : NSObject <NTTodayResultsAggregator> {
    <FCCoreConfigurationManager> * _configurationManager;
    <FCFeedPersonalizing><FCPersonalizationFunctionProviding> * _feedPersonalizer;
    NSDate * _filterDate;
    NSObject<FCTodayPrivateData> * _todayData;
}

@property (nonatomic, retain) <FCCoreConfigurationManager> *configurationManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCFeedPersonalizing><FCPersonalizationFunctionProviding> *feedPersonalizer;
@property (nonatomic, copy) NSDate *filterDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSObject<FCTodayPrivateData> *todayData;

- (void).cxx_destruct;
- (id)_itemsForSection:(id)arg1 items:(id)arg2 withBudgetInfo:(id)arg3 previouslyChosenItems:(id)arg4 priorClusterIDsInOtherSections:(id)arg5 sectionItemsLimit:(unsigned long long)arg6 otherArticleIDs:(id)arg7 embedsLimit:(unsigned long long)arg8 remainingSlots:(double)arg9 slotsUsed:(double*)arg10 noMoreItemsToGive:(bool*)arg11 noRoomForMoreItems:(bool*)arg12 slotAllocationByDynamicSlotItemID:(id)arg13;
- (id)_sectionFilterTransformationWithDescriptor:(id)arg1 priorClusterIDsInOtherSections:(id)arg2 priorClusterIDsInSection:(id)arg3 otherArticleIDs:(id)arg4 embedsLimit:(unsigned long long)arg5;
- (id)aggregateSections:(id)arg1 itemsBySectionDescriptor:(id)arg2 budgetInfo:(id)arg3;
- (id)configurationManager;
- (id)feedPersonalizer;
- (id)filterDate;
- (id)init;
- (id)initWithConfigurationManager:(id)arg1 feedPersonalizer:(id)arg2 filterDate:(id)arg3 todayData:(id)arg4;
- (void)setConfigurationManager:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setFilterDate:(id)arg1;
- (void)setTodayData:(id)arg1;
- (id)todayData;

@end
