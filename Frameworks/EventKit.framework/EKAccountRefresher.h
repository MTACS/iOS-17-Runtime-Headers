
@interface EKAccountRefresher : NSObject {
    bool  _currentlySyncing;
    <EKAccountRefresherDelegate> * _delegate;
    EKEventStore * _eventStore;
    NSDate * _refreshStartDate;
    bool  _refreshing;
    NSArray * _refreshingCalendars;
    NSArray * _refreshingSources;
}

@property (nonatomic, readonly) bool allAccountsOffline;
@property (nonatomic) <EKAccountRefresherDelegate> *delegate;
@property (nonatomic, readonly) bool refreshing;

- (void).cxx_destruct;
- (bool)_allCalendarsRefreshed;
- (bool)_allSourcesRefreshed;
- (bool)_areAnyCalendarsCurrentlySyncing;
- (bool)_areAnySourcesCurrentlySyncing;
- (void)_beginMaximumTimeElapsedTimeout;
- (void)_beginSyncStartTimeout;
- (void)_cancelMaximumTimeElapsedTimeout;
- (void)_cancelSyncStartTimeout;
- (void)_eventStoreChanged:(id)arg1;
- (void)_refreshControlMaximumVisibleTimeElapsed;
- (void)_syncCompleted;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncStartTimeoutExpired;
- (bool)allAccountsOffline;
- (bool)calendarFinishedRefreshing:(id)arg1;
- (id)delegate;
- (id)initWithEventStore:(id)arg1;
- (void)refresh;
- (bool)refreshing;
- (void)setDelegate:(id)arg1;
- (bool)sourceFinishedRefreshing:(id)arg1;

@end
