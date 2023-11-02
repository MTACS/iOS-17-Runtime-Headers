
@interface WLKUpNextWidgetRequestOperation : WLKUTSNetworkRequestOperation {
    WLKUpNextItemCollection * _itemCollection;
}

@property (nonatomic, readonly) WLKUpNextItemCollection *itemCollection;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)arg1 options:(long long)arg2;
- (id)itemCollection;
- (void)processResponse;

@end
