
@protocol NSFileProviderSearching <NSObject>

@required

- (<NSFileProviderEnumerator> *)enumeratorForSearch:(NSFileProviderSearch *)arg1 request:(NSFileProviderRequest *)arg2 error:(id*)arg3;

@end
