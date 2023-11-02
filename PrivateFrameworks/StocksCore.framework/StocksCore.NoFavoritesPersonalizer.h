
@interface StocksCore.NoFavoritesPersonalizer : _TtCs12_SwiftObject <FCFavoritesPersonalizer>

@property (nonatomic, readonly) FCPersonalizationWhitelist *whitelist;

- (void)prepareFavorites:(id /* block */)arg1;
- (id)whitelist;
- (unsigned long long)whitelistLevelForTagID:(id)arg1;

@end
