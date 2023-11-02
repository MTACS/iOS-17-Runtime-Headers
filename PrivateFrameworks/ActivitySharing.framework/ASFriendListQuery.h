
@interface ASFriendListQuery : HKQuery <ASFriendListQueryClientInterface> {
    int  _mostRecentToken;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (bool)supportsTaskServers;

- (void).cxx_destruct;
- (void)client_deliverFriendList:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUpdateHandler:(id /* block */)arg1;
- (void)queue_deliverError:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (bool)queue_shouldDeactivateAfterInitialResults;
- (void)queue_validate;

@end
