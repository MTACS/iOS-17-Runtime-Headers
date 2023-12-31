
@interface ICCloudKitSyncer : NSObject {
    <ICCloudKitSyncerDelegate> * _delegate;
}

@property (nonatomic) <ICCloudKitSyncerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)saveUnsyncedObjects;
- (void)saveUnsyncedObjectsWithRetryCount:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
