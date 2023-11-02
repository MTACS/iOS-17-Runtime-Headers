
@interface _WDSampleListDataProviderPagingContext : NSObject {
    <HKSampleListDataFetcher> * _currentDataFetcher;
    NSDate * _earliestProcessedSampleDate;
    NSDate * _fetchUntilDate;
    bool  _fetchingData;
    bool  _requiresPaging;
}

@property (nonatomic, retain) <HKSampleListDataFetcher> *currentDataFetcher;
@property (nonatomic, retain) NSDate *earliestProcessedSampleDate;
@property (nonatomic, retain) NSDate *fetchUntilDate;
@property (getter=isFetchingData, nonatomic) bool fetchingData;
@property (nonatomic) bool requiresPaging;

- (void).cxx_destruct;
- (id)currentDataFetcher;
- (id)earliestProcessedSampleDate;
- (id)fetchUntilDate;
- (bool)isFetchingData;
- (bool)requiresPaging;
- (void)setCurrentDataFetcher:(id)arg1;
- (void)setEarliestProcessedSampleDate:(id)arg1;
- (void)setFetchUntilDate:(id)arg1;
- (void)setFetchingData:(bool)arg1;
- (void)setRequiresPaging:(bool)arg1;

@end
