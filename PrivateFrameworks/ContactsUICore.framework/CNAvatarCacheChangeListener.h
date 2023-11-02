
@interface CNAvatarCacheChangeListener : NSObject {
    NSData * _currentHistoryToken;
    <CNAvatarCacheChangeListenerDelegate> * _delegate;
    NSNotificationCenter * _notificationCenter;
    <CNScheduler> * _preprocessor;
    <CNScheduler> * _rawPreprocessor;
    CNContactStore * _store;
}

@property (copy) NSData *currentHistoryToken;
@property (nonatomic, readonly) <CNAvatarCacheChangeListenerDelegate> *delegate;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) <CNScheduler> *preprocessor;
@property (nonatomic, readonly) <CNScheduler> *rawPreprocessor;
@property (nonatomic, readonly) CNContactStore *store;

- (void).cxx_destruct;
- (id)currentHistoryToken;
- (void)databaseChanged:(id)arg1;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithContactStore:(id)arg1 delegate:(id)arg2;
- (void)loadCurrentHistoryToken;
- (id)makeAnalysisTask;
- (id)makeDatabaseChangedTask;
- (id)makeReportingTaskWithIdentifiers:(id)arg1;
- (id)notificationCenter;
- (id)preprocessor;
- (id)rawPreprocessor;
- (void)setCurrentHistoryToken:(id)arg1;
- (void)start;
- (void)stop;
- (id)store;

@end
