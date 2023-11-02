
@interface PKPayLaterCalendarViewController : PKHorizontalScrollingViewController <PKHorizontalScrollingViewControllerDataSource, PKPayLaterFinancingPlansFetcherObserver> {
    NSArray * _emptyViewControllers;
    PKPayLaterFinancingPlansFetcher * _fetcher;
    PKPayLaterInstallmentPresenter * _installmentPresenter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockUpdate;
    NSArray * _months;
    PKAccount * _payLaterAccount;
    NSMutableArray * _pendingDateUpdates;
    long long  _startingIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cachedDataAtIndex:(long long)arg1;
- (void)dealloc;
- (void)didDequeueViewController:(id)arg1;
- (void)didMoveToPrimaryIndex:(long long)arg1;
- (id)emptyViewControllers;
- (void)fetchDataAtIndex:(long long)arg1 completion:(id /* block */)arg2;
- (id)footerView;
- (double)footerViewContentHeight;
- (id)initWithPlansFetcher:(id)arg1 installmentPresenter:(id)arg2 paymentIntentController:(id)arg3;
- (void)invalidatedInstallmentsMonth;
- (void)invalidatedInstallmentsMonthsWithDates:(id)arg1;
- (id)loadingDataObjectWithCurrentData:(id)arg1 index:(long long)arg2 swap:(bool)arg3;
- (long long)numberOfItems;
- (void)prefetchDataIfNecessary;
- (void)preflightWithFirstShownDate:(id)arg1 completion:(id /* block */)arg2;
- (long long)startingIndex;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
