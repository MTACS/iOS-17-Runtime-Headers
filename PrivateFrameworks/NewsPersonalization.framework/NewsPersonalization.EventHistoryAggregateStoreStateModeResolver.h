
@interface NewsPersonalization.EventHistoryAggregateStoreStateModeResolver : NSObject <FCPersonalizationDataGeneratorType, FCReadonlyAggregateStoreProviderType> {
    void mode;
    void personalizationData;
    void userEventHistoryAggregateStoreFactory;
}

- (void).cxx_destruct;
- (id)aggregateStore;
- (id)generateDerivedData;
- (id)init;

@end
