
@interface BRCFailedListSaveObject : NSObject {
    id /* block */  _clientTruthCallback;
    BRCPendingChangesStream * _pendingChangesStream;
    id /* block */  _serverTruthCallback;
}

@property (nonatomic, readonly) id /* block */ clientTruthCallback;
@property (nonatomic, readonly) BRCPendingChangesStream *pendingChangesStream;
@property (nonatomic, readonly) id /* block */ serverTruthCallback;

- (void).cxx_destruct;
- (id /* block */)clientTruthCallback;
- (id)initWithPendingChangesStream:(id)arg1 serverTruthCallback:(id /* block */)arg2 clientTruthCallback:(id /* block */)arg3;
- (id)pendingChangesStream;
- (id /* block */)serverTruthCallback;

@end
