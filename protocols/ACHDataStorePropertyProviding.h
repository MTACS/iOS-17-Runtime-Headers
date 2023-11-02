
@protocol ACHDataStorePropertyProviding <NSObject>

@required

- (void)dataStoreDidClearAllProperties:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: ACHDataStore *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSDictionary *)dataStoreProperties;
- (NSArray *)dataStorePropertyKeys;
- (void)setDataStoreProperties:(NSDictionary *)arg1;
- (NSString *)uniqueName;

@end
