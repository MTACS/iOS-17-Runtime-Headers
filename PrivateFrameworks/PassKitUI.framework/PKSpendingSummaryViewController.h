
@interface PKSpendingSummaryViewController : PKHorizontalScrollingViewController <PKHorizontalScrollingViewControllerDataSource, PKSpendingSingleSummaryViewControllerDelegate, PKSpendingSummaryFetcherObserver> {
    PKAccount * _account;
    PKAccountUserCollection * _accountUserCollection;
    PKContactAvatarManager * _avatarManager;
    unsigned long long  _categorization;
    NSCalendar * _currentCalendar;
    NSArray * _currentDataSet;
    NSArray * _currentMonthTransactions;
    unsigned long long  _currentSummaryType;
    <PKSpendingSummaryViewControllerDelegate> * _delegate;
    unsigned long long  _displayType;
    NSArray * _emptyViewControllers;
    PKFamilyMemberCollection * _familyCollection;
    UIView<PKHorizontalScrollingFooterViewProtocol> * _footerView;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockUpdate;
    NSArray * _months;
    NSString * _navTitle;
    PKPaymentPass * _pass;
    NSMutableDictionary * _pendingUpdates;
    long long  _startingIndex;
    PKSpendingSummaryFetcher * _summaryFetcher;
    PKTransactionSourceCollection * _transactionSourceCollection;
    bool  _transitioningMode;
    NSArray * _weeks;
    NSArray * _years;
}

@property (nonatomic) unsigned long long categorization;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSpendingSummaryViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeModeTo:(unsigned long long)arg1;
- (unsigned long long)_newDataSetIndexAfterTransitionFromMode:(unsigned long long)arg1 toMode:(unsigned long long)arg2;
- (void)_reportTappedButtonWithTag:(id)arg1;
- (void)_updateBackTitle;
- (id)cachedDataAtIndex:(long long)arg1;
- (unsigned long long)categorization;
- (void)dealloc;
- (id)delegate;
- (void)didDequeueViewController:(id)arg1;
- (void)didMoveToPrimaryIndex:(long long)arg1;
- (id)emptyViewControllers;
- (void)fetchDataAtIndex:(long long)arg1 completion:(id /* block */)arg2;
- (id)footerView;
- (double)footerViewContentHeight;
- (id)initWithTransactionSourceCollection:(id)arg1 familyCollection:(id)arg2 avatarManager:(id)arg3 account:(id)arg4 accountUserCollection:(id)arg5 physicalCards:(id)arg6 fetcher:(id)arg7 weeks:(id)arg8 months:(id)arg9 years:(id)arg10 type:(unsigned long long)arg11 unit:(unsigned long long)arg12 currentMonthTransactions:(id)arg13 pendingPayments:(id)arg14 upcomingScheduledPayments:(id)arg15 dispayType:(unsigned long long)arg16;
- (void)invalidatedSpendingSummaryOfType:(unsigned long long)arg1 startingWithDate:(id)arg2;
- (void)invalidatedSummariesAvailable;
- (id)loadingDataObjectWithCurrentData:(id)arg1 index:(long long)arg2 swap:(bool)arg3;
- (long long)numberOfItems;
- (id)pkNavigationController;
- (void)prefetchDataIfNecessary;
- (void)setCategorization:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)spendingSingleSummaryViewController:(id)arg1 changedSelection:(unsigned long long)arg2;
- (long long)startingIndex;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
