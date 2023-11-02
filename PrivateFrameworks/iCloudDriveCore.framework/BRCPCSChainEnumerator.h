
@interface BRCPCSChainEnumerator : NSEnumerator {
    BRCPrivateClientZone * _clientZone;
    NSError * _error;
    BRCItemID * _itemIDNeedingListing;
    unsigned long long  _maxPathDepth;
    NSMutableArray * _stack;
}

- (void).cxx_destruct;
- (id)error;
- (id)initWithPCSChainInfo:(id)arg1 clientZone:(id)arg2;
- (id)itemIDNeedingListing;
- (id)nextObject;

@end
