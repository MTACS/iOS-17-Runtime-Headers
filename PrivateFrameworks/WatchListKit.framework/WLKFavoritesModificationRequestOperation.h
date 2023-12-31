
@interface WLKFavoritesModificationRequestOperation : WLKUTSNetworkRequestOperation {
    unsigned long long  _action;
    NSString * _entityID;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSString *entityID;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)entityID;
- (id)initWithAction:(unsigned long long)arg1 entityId:(id)arg2 caller:(id)arg3;
- (void)processResponse;

@end
