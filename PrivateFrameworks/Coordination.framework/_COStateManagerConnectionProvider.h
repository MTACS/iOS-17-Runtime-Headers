
@interface _COStateManagerConnectionProvider : NSObject <COStateManagerConnectionProvider> {
    NSXPCConnection * _stateManagerServiceConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSXPCConnection *stateManagerServiceConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)stateManagerServiceConnection;

@end
