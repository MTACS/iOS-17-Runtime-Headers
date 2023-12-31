
@interface SGHistoryObserver : NSObject <SGSuggestHistoryObserver> {
    SGSqlEntityStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)hashesDidChange;
- (id)initWithStore:(id)arg1;
- (void)processNewConfirmOrRejectEventHashes:(id)arg1;
- (void)processNewConfirmedOrRejectedReminderHashes:(id)arg1;

@end
