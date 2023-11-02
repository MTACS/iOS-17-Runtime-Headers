
@interface WLKTopShelfRequestOperation : WLKUTSNetworkRequestOperation {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueryParameters:(id)arg1 options:(long long)arg2;
- (id)items;
- (void)processResponse;

@end
