
@interface NewsPersonalization.ExtensionUserContextProvider : _TtCs12_SwiftObject <FCFavoritesPersonalizer> {
    void todayPrivateData;
}

@property (nonatomic, readonly) FCPersonalizationWhitelist *whitelist;

- (void)prepareFavorites:(id /* block */)arg1;
- (id)whitelist;
- (unsigned long long)whitelistLevelForTagID:(id)arg1;

@end
