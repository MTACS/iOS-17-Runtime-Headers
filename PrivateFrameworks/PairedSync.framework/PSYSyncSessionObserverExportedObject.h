
@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface> {
    <PSYSyncSessionObserverInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSYSyncSessionObserverInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (oneway void)invalidateSyncSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (oneway void)syncSessionWillStart:(id)arg1;
- (oneway void)updateSyncSession:(id)arg1;

@end
