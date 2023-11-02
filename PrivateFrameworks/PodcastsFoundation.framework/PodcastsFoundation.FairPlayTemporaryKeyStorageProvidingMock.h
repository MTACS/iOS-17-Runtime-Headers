
@interface PodcastsFoundation.FairPlayTemporaryKeyStorageProvidingMock : _TtCs12_SwiftObject <PFFairPlayTemporaryKeyStorageProviding> {
    void createDirectoryHandler;
    void directoryExistsHandler;
    void directoryLocationHandler;
    void removeDirectoryHandler;
}

- (id)createDirectoryFor:(long long)arg1 error:(id*)arg2;
- (bool)directoryExistsFor:(long long)arg1;
- (id)directoryLocationFor:(long long)arg1;
- (bool)removeDirectoryFor:(long long)arg1 error:(id*)arg2;

@end
