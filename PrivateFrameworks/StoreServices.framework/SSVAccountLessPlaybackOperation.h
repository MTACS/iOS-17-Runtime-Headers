
@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {
    NSString * _assetStoreFrontIdentifier;
    NSMutableDictionary * _httpHeaderFields;
    NSString * _itemIdentifier;
    id /* block */  _responseBlock;
}

@property (nonatomic, copy) NSDictionary *HTTPHeaderFields;
@property (nonatomic, copy) NSString *assetStoreFrontIdentifier;
@property (copy) NSString *itemIdentifier;
@property (copy) id /* block */ responseBlock;

- (void).cxx_destruct;
- (id)HTTPHeaderFields;
- (id)_requestBodyData;
- (id)assetStoreFrontIdentifier;
- (id)itemIdentifier;
- (void)main;
- (id /* block */)responseBlock;
- (void)setAssetStoreFrontIdentifier:(id)arg1;
- (void)setHTTPHeaderFields:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setResponseBlock:(id /* block */)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
