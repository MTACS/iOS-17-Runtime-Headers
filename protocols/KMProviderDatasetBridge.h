
@protocol KMProviderDatasetBridge <NSObject>

@required

- (bool)enumerateItemsWithError:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 7: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, KVItem *, void*
- (long long)itemType;
- (NSString *)originAppId;

@end
