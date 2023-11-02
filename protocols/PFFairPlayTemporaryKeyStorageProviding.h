
@protocol PFFairPlayTemporaryKeyStorageProviding

@required

- (NSURL *)createDirectoryFor:(long long)arg1 error:(id*)arg2;
- (bool)directoryExistsFor:(long long)arg1;
- (NSURL *)directoryLocationFor:(long long)arg1;
- (bool)removeDirectoryFor:(long long)arg1 error:(id*)arg2;

@end
