
@interface MessageListCellsController : NSObject <EFLoggable> {
    EMCoreAnalyticsCollector * _analyticsCollector;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _analyticsLock;
    NSMutableDictionary * _bucketedFlickerDurations;
    <EFCancelable> * _currentUpdateToken;
    NSMutableDictionary * _failureCodeCount;
    long long  _loadAttempts;
    long long  _loadFailures;
    long long  _numberOfFlickeringCells;
    long long  _numberOfVisibleCells;
    NSMutableArray * _rawFlickerDurations;
    EFLocked * _visibleItemIDs;
}

@property (nonatomic, readonly) EMCoreAnalyticsCollector *analyticsCollector;
@property (nonatomic, retain) <EFCancelable> *currentUpdateToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *failureCodeCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long loadAttempts;
@property (nonatomic) long long loadFailures;
@property (nonatomic) long long numberOfFlickeringCells;
@property (nonatomic) long long numberOfVisibleCells;
@property (readonly) Class superclass;
@property (nonatomic, retain) EFLocked *visibleItemIDs;

+ (id)log;

- (void).cxx_destruct;
- (id)analyticsCollector;
- (id)currentUpdateToken;
- (id)failureCodeCount;
- (id)init;
- (long long)loadAttempts;
- (long long)loadFailures;
- (void)markItemIDsAsVisibleBeforeUpdate:(id)arg1;
- (long long)numberOfFlickeringCells;
- (long long)numberOfVisibleCells;
- (void)reportCellDidLoad:(bool)arg1 error:(id)arg2;
- (void)reportFlickeringCell:(bool)arg1 duration:(double)arg2;
- (void)reportMessageListCellMetrics;
- (void)setCurrentUpdateToken:(id)arg1;
- (void)setFailureCodeCount:(id)arg1;
- (void)setLoadAttempts:(long long)arg1;
- (void)setLoadFailures:(long long)arg1;
- (void)setNumberOfFlickeringCells:(long long)arg1;
- (void)setNumberOfVisibleCells:(long long)arg1;
- (void)setVisibleItemIDs:(id)arg1;
- (id)visibleItemIDs;
- (bool)wasItemRecentlyVisible:(id)arg1;

@end
