
@protocol ICStorePlatformResponse <NSCopying, NSObject>

@required

- (NSNumber *)accountIdentifier;
- (NSArray *)allItems;
- (NSNumber *)enqueuerAccountIdentifier;
- (void)enumerateItemsUsingBlock:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ICStorePlatformMetadata *, bool*, void*
- (NSDate *)expirationDate;
- (ICStorePlatformMetadata *)itemForIdentifier:(NSString *)arg1;
- (ICURLAggregatedPerformanceMetrics *)performanceMetrics;
- (id)rawResponse;
- (NSString *)storefrontIdentifier;

@end
