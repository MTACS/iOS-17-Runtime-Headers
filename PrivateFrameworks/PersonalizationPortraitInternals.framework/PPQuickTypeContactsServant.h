
@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {
    NSCache * _cachedNameLookups;
    PPLocalContactStore * _localContactStore;
    NSCache * _meQuickTypeItemCache;
}

- (void).cxx_destruct;
- (void)clearCaches;
- (id)init;
- (id)initWithOptions:(unsigned char)arg1;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;

@end
