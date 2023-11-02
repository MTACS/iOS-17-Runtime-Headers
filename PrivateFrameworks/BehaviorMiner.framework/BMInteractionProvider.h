
@interface BMInteractionProvider : NSObject {
    BMMiningTaskConfig * _bmMiningTaskConfig;
    id  _contextKitClient;
    _CDInteractionStore * _interactionStore;
}

@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;
@property (nonatomic, retain) id contextKitClient;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;

- (void).cxx_destruct;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1;
- (id)bmMiningTaskConfig;
- (id)contextKitClient;
- (id)getResultsForRequest:(id)arg1;
- (id)init;
- (id)initWithBMMiningTaskConfig:(id)arg1;
- (id)initWithInteractionStore:(id)arg1;
- (id)initWithInteractionStore:(id)arg1 bmMiningTaskConfig:(id)arg2;
- (id)interactionEventsForTypes:(id)arg1 error:(id*)arg2;
- (id)interactionStore;
- (void)setBmMiningTaskConfig:(id)arg1;
- (void)setContextKitClient:(id)arg1;

@end
