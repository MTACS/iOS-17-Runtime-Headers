
@interface PLHUDControl : NSObject {
    BSServiceConnection<BSServiceConnectionClient> * _connection;
}

@property (nonatomic, retain) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (nonatomic) bool internalHUDEnabled;

- (void).cxx_destruct;
- (void)_ensureConnection;
- (id)_hudServer;
- (id)connection;
- (void)dealloc;
- (bool)internalHUDEnabled;
- (void)setConnection:(id)arg1;
- (void)setInternalHUDEnabled:(bool)arg1;

@end
