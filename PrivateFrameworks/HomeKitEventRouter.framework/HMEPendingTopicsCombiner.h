
@interface HMEPendingTopicsCombiner : NSObject {
    NSMutableSet * _addTopicFilters;
    NSMutableSet * _removeTopicFilters;
}

@property (retain) NSMutableSet *addTopicFilters;
@property (retain) NSMutableSet *removeTopicFilters;
@property (readonly) NSArray *topicFiltersToAdd;
@property (readonly) NSArray *topicFiltersToRemove;

- (void).cxx_destruct;
- (id)addTopicFilters;
- (void)combineOntoPreviousAdditions:(id)arg1 removals:(id)arg2;
- (void)combineWithAdditions:(id)arg1 removals:(id)arg2;
- (id)init;
- (id)removeTopicFilters;
- (void)reset;
- (void)setAddTopicFilters:(id)arg1;
- (void)setRemoveTopicFilters:(id)arg1;
- (id)topicFiltersToAdd;
- (id)topicFiltersToRemove;

@end
