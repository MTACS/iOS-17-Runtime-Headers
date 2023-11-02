
@protocol GEOConfigProxy <NSObject>

@required

- (<GEOConfigStorageExpiry> *)configExpiryForOptions:(unsigned long long)arg1;
- (<GEOConfigStorageExpiry> *)configExpiryForSource:(long long)arg1;
- (<GEOConfigStorageReadWrite> *)configStoreForOptions:(unsigned long long)arg1;
- (<GEOConfigStorageReadWrite> *)configStoreForSource:(long long)arg1;

@end
