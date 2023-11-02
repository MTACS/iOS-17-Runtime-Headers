
@interface SFHistoryViewDataSource : NSObject {
    <SFHistoryViewDataSourceDelegate> * _delegate;
    NSPredicate * _filterPredicate;
    NSObject<OS_dispatch_queue> * _filteringQueue;
    History * _history;
    NSTimer * _saveChangesToCloudHistoryTimer;
    WBSHistorySessionController * _sessionController;
    NSOrderedSet * _unfilteredSessions;
    struct { 
        bool isUpdating; 
        bool filterChanged; 
        bool changedExternally; 
        unsigned long long suppressingUpdatesCount; 
    }  _updateFlags;
}

@property (nonatomic) <SFHistoryViewDataSourceDelegate> *delegate;
@property (nonatomic, readonly) History *history;

- (void).cxx_destruct;
- (id)_browsingSessions;
- (id)_filteredHistorySessionsForPredicate:(id)arg1;
- (void)_saveChangesToCloudHistory;
- (void)_updateIfNeeded;
- (void)dealloc;
- (id)delegate;
- (void)deleteHistoryItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)filterUsingPredicate:(id)arg1;
- (id)history;
- (void)historyChanged:(id)arg1;
- (id)initWithHistory:(id)arg1;
- (void)saveChangesToCloudHistorySoon;
- (void)setDelegate:(id)arg1;

@end
