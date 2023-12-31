
@interface HFDataAnalyticsModule : HFItemModule {
    HFDataAnalyticsLogItemProvider * _logItemProvider;
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) HFDataAnalyticsLogItemProvider *logItemProvider;
@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)itemProviders;
- (id)logItemProvider;
- (id)mediaProfileContainer;

@end
