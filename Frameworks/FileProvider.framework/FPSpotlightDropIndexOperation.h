
@interface FPSpotlightDropIndexOperation : FPOperation {
    CSSearchableIndex * _index;
    FPSpotlightIndexer * _indexer;
    NSString * _reason;
    NSString * _spotlightDomainIdentifier;
}

+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)arg1 index:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)initWithIndexer:(id)arg1 index:(id)arg2 spotlightDomainIdentifier:(id)arg3 reason:(id)arg4;
- (void)main;
- (id)operationDescription;

@end
