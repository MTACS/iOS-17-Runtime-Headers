
@interface PFCachingArchiveIndex : NSObject <PFCachingArchiveIndex> {
    bool  _loaded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned int)architectureHash;
- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser {} *x_1_1_1; } x1; })archiveLineParserForIndexPath:(id)arg1;
- (bool)createIndexFromArchiveFile:(id)arg1 tempIndexFile:(id)arg2;
- (id)dataArchivePath;
- (bool)indexFileValid:(const char *)arg1;
- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (id)indexName;
- (id)indexPath:(id*)arg1;
- (bool)indexSupported;
- (bool)loadIndexFile:(const char *)arg1 fileSize:(long long)arg2;
- (bool)loadOrCreateIndex;
- (bool)makeAndCacheIndexFileInDirectory:(id)arg1 indexPath:(id)arg2;

@end
