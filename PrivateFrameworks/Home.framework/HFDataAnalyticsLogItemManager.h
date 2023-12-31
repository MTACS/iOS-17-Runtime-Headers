
@interface HFDataAnalyticsLogItemManager : HFItemManager {
    HFDataAnalyticsModule * _dataAnalyticsModule;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) HFDataAnalyticsModule *dataAnalyticsModule;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)dataAnalyticsModule;
- (id)initWithMediaProfileContainer:(id)arg1 delegate:(id)arg2;
- (id)mediaProfileContainer;

@end
