
@interface MPStorePurchaseErrorResolver : MPAVErrorResolver {
    NSNumber * _storeAccountIdentifier;
}

@property (nonatomic, readonly, copy) NSNumber *storeAccountIdentifier;

- (void).cxx_destruct;
- (id)initWithStoreAccountIdentifier:(id)arg1;
- (void)resolveError:(id)arg1;
- (id)storeAccountIdentifier;

@end
