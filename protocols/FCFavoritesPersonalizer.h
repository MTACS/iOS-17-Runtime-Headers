
@protocol FCFavoritesPersonalizer

@required

- (void)prepareFavorites:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (FCPersonalizationWhitelist *)whitelist;
- (unsigned long long)whitelistLevelForTagID:(NSString *)arg1;

@end
