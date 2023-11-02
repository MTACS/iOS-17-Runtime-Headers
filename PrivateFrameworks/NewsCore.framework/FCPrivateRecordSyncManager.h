
@interface FCPrivateRecordSyncManager : NSObject <FCPrivateDataSyncManager> {
    NTPBPrivateRecordSyncState * _currentState;
    <FCPrivateRecordSyncManagerDelegate> * _delegate;
    NSArray * _desiredKeys;
    CKRecordID * _recordID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastCleanDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)fetchChangesWithContext:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (bool)isAwaitingFirstSync;
- (bool)isDirty;
- (id)lastCleanDate;
- (void)markAsDirty;
- (void)notifyObservers;

@end
