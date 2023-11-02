
@interface ML3ClientImportSession : NSObject <ML3ClientImportSessionXPCInterface> {
    <ML3ClientImportSessionDelegate> * _delegate;
    bool  _hasActiveSession;
    NSProgress * _progress;
    ML3ClientImportSessionConfiguration * _sessionConfiguration;
    NSXPCConnection * _xpcClientConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSProgress *progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_xpcClientConnection;
- (bool)addItems:(id)arg1;
- (id)addItemsReturningResult:(id)arg1;
- (bool)cancel;
- (bool)finish;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2;
- (id)progress;
- (bool)removeItems:(id)arg1;
- (id)removeItemsReturningResult:(id)arg1;
- (void)sessionDidUpdateProgress:(float)arg1;
- (void)sessionFailedToAddItem:(id)arg1 completion:(id /* block */)arg2;
- (void)sessionFailedToRemoveItem:(id)arg1 completion:(id /* block */)arg2;
- (void)sessionFailedToUpdateItem:(id)arg1 completion:(id /* block */)arg2;
- (bool)start;
- (bool)updateItems:(id)arg1;
- (id)updateItemsReturningResult:(id)arg1;

@end
