
@interface WLKWatchListModificationRequestOperation : WLKUTSNetworkRequestOperation {
    unsigned long long  _action;
    NSString * _itemID;
    WLKWatchListModificationResponse * _response;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSString *itemID;
@property (nonatomic, readonly) WLKWatchListModificationResponse *response;

- (void).cxx_destruct;
- (id)_initWithAction:(unsigned long long)arg1 identifier:(id)arg2 identifierType:(id)arg3 brandID:(id)arg4 caller:(id)arg5;
- (unsigned long long)action;
- (id)initWithAction:(unsigned long long)arg1 canonicalID:(id)arg2 caller:(id)arg3;
- (id)initWithAction:(unsigned long long)arg1 channelID:(id)arg2 externalID:(id)arg3 caller:(id)arg4;
- (id)initWithAction:(unsigned long long)arg1 statsID:(id)arg2 caller:(id)arg3;
- (id)itemID;
- (void)processResponse;
- (id)response;

@end
