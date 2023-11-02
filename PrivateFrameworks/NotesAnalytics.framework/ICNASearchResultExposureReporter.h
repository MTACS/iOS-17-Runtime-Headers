
@interface ICNASearchResultExposureReporter : NSObject {
    ICNAEventReporter * _eventReporter;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    NSMutableArray * _searchResultExposureItems;
    NSString * _searchSessionID;
    UIWindow * _window;
}

@property (nonatomic, retain) ICNAEventReporter *eventReporter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (nonatomic, retain) NSMutableArray *searchResultExposureItems;
@property (nonatomic, retain) NSString *searchSessionID;
@property (nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (id)_exposureDataThreadUnsafe;
- (void)analyticsSessionWillEnd:(id)arg1;
- (void)dealloc;
- (id)eventReporter;
- (void)eventReporterLostSession:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)invalidateSearchSessionID;
- (id)isolationQueue;
- (id)searchResultExposureItems;
- (id)searchSessionID;
- (void)setEventReporter:(id)arg1;
- (void)setIsolationQueue:(id)arg1;
- (void)setSearchResultExposureItems:(id)arg1;
- (void)setSearchSessionID:(id)arg1;
- (void)setWindow:(id)arg1;
- (void)startTrackingNewSearchString:(id)arg1;
- (void)submitEventIfApplicable;
- (void)updateSearchResultWasSelected:(bool)arg1;
- (void)updateSearchSessionID:(id)arg1;
- (void)updateWithTopHitResultCount:(unsigned long long)arg1 nonTopHitResultCount:(unsigned long long)arg2;
- (id)window;

@end
