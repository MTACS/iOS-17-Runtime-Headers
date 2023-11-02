
@interface UIKeyboardUIHandle : NSObject <UIKeyboardUIServiceProtocol> {
    BSServiceConnection<BSServiceConnectionHost> * _connection;
    UIKeyboardUIService * _service;
}

- (void).cxx_destruct;
- (id)initWithService:(id)arg1 connection:(id)arg2;
- (void)setKeyboardAlpha:(id)arg1 force:(id)arg2 processId:(id)arg3;
- (id)snapshotForOptions:(id)arg1;
- (id)snapshotForView:(id)arg1;

@end
