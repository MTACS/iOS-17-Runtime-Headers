
@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation {
    NSString * _affiliateIdentifier;
    ICStoreRequestContext * _requestContext;
    long long  _storeItemID;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 storeItemID:(long long)arg2 affiliateIdentifier:(id)arg3;

@end
