
@interface PXSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PXSearchZeroKeywordChangeDelegate> {
    long long  _filteringState;
    NSArray * _gadgetProviders;
    PXTapToRadarGadgetProvider * _tapToRadarProvider;
    PXSearchZeroKeywordDataSource * _zeroKeywordDataSource;
    NSArray * _zeroKeywordGadgetProviders;
    id /* block */  _zeroKeywordSectionsUpdateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long filteringState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpectedToLoadNonEmptyDataSourceSoon;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXTapToRadarGadgetProvider *tapToRadarProvider;
@property (nonatomic, readonly) PXSearchZeroKeywordDataSource *zeroKeywordDataSource;
@property (nonatomic, retain) NSArray *zeroKeywordGadgetProviders;
@property (nonatomic, copy) id /* block */ zeroKeywordSectionsUpdateHandler;

- (void).cxx_destruct;
- (void)_waitForFirstDisplayTimedOut;
- (bool)_zeroKeywordDataSourceHasZeroKeywords;
- (void)didUpdateSections:(id)arg1;
- (long long)filteringState;
- (id)gadgetProviders;
- (id)hiddenGadgetProviders;
- (id)init;
- (bool)isExpectedToLoadNonEmptyDataSourceSoon;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)arg1;
- (void)refreshData;
- (void)setFilteringState:(long long)arg1;
- (void)setTapToRadarProvider:(id)arg1;
- (void)setZeroKeywordGadgetProviders:(id)arg1;
- (void)setZeroKeywordSectionsUpdateHandler:(id /* block */)arg1;
- (id)tapToRadarProvider;
- (id)zeroKeywordDataSource;
- (id)zeroKeywordGadgetProviders;
- (id)zeroKeywordSections;
- (id /* block */)zeroKeywordSectionsUpdateHandler;

@end
