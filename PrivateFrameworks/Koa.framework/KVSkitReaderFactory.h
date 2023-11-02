
@interface KVSkitReaderFactory : NSObject <KVSkitAccessProvider> {
    NSObject<KVSkitReadAccess> * _cachedLocalReader;
    NSMutableDictionary * _cachedRemoteReaders;
}

+ (id)_rootDirectoryURL;

- (void).cxx_destruct;
- (id)_provideAccess:(id)arg1 forUser:(id)arg2;
- (id)accessReadOnlySkitForUser:(id)arg1;
- (id)init;
- (bool)setItems:(id)arg1 error:(id*)arg2;
- (bool)supportsMultiUser;

@end
