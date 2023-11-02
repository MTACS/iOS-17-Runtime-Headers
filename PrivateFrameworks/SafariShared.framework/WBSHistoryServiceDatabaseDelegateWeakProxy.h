
@interface WBSHistoryServiceDatabaseDelegateWeakProxy : NSObject <WBSHistoryServiceDatabaseDelegate> {
    <WBSHistoryServiceDatabaseDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)reportPermanentIDsForItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportPermanentIDsForVisits:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportSevereError:(id)arg1 completionHandler:(id /* block */)arg2;

@end
