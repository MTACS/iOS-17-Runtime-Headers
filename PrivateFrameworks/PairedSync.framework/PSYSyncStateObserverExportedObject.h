
@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface> {
    <PSYSyncStateObserverInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYSyncStateObserverInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (oneway void)didUpdateSyncForPairingID:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
