
@interface HUFakeXPCClient : HCXPCClient {
    id /* block */  _updateBlock;
}

- (void).cxx_destruct;
- (void)registerMessageBlock:(id /* block */)arg1;
- (bool)sendMessage:(id)arg1 errorBlock:(id /* block */)arg2;
- (bool)wantsUpdatesForIdentifier:(unsigned long long)arg1;

@end
