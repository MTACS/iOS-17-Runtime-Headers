
@protocol SPAdvertisementCaching <NSObject>

@required

- (void)advertisementsForSearchCriteria:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SPAdvertisementCacheSearchCriteria *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SPAdvertisementCacheSearchResult *, void*
- (void)markAdvertisementsProcessed:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)saveAdvertisements:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
