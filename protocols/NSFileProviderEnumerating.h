
@protocol NSFileProviderEnumerating <NSObject>

@required

- (<NSFileProviderEnumerator> *)enumeratorForContainerItemIdentifier:(NSString *)arg1 request:(NSFileProviderRequest *)arg2 error:(id*)arg3;

@end
