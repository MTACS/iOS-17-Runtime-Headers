
@interface WFNetworkListRandomMACManager : NSObject {
    NSMutableDictionary * _cache;
    WFClient * _client;
    bool  _shouldResetCache;
}

@property (nonatomic, retain) NSMutableDictionary *cache;
@property (nonatomic, retain) WFClient *client;
@property (nonatomic) bool shouldResetCache;

- (void).cxx_destruct;
- (id)cache;
- (id)cachedRandomMACForSSID:(id)arg1;
- (id)client;
- (id)initWithClient:(id)arg1;
- (bool)isSSIDinCache:(id)arg1;
- (id)newScanRecordWithRandomMACFromScanRecord:(id)arg1;
- (void)resetCacheWithCurrentNetworkName:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setRandomMAC:(id)arg1 forNetwork:(id)arg2 enabled:(bool)arg3 shouldAlwaysDisplayRandomAddress:(bool)arg4;
- (void)setShouldResetCache:(bool)arg1;
- (bool)shouldAlwaysDisplayRandomAddressForSSID:(id)arg1;
- (bool)shouldEnableRandomMACForSSID:(id)arg1;
- (bool)shouldResetCache;

@end
