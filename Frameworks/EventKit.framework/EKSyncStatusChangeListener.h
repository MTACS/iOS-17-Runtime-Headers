
@interface EKSyncStatusChangeListener : NSObject {
    <EKSyncStatusChangeListenerDelegate> * _delegate;
    EKEventStore * _eventStore;
    NSMutableDictionary * _sourceLastSyncingEndDates;
}

@property (nonatomic) <EKSyncStatusChangeListenerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_eventStoreChanged:(id)arg1;
- (void)_setupSources;
- (id)delegate;
- (id)initWithEventStore:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
