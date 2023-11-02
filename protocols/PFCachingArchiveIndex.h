
@protocol PFCachingArchiveIndex <NSObject>

@required

- (struct unique_ptr<pf::ArchiveLineParser, std::default_delete<pf::ArchiveLineParser>> { struct __compressed_pair<pf::ArchiveLineParser *, std::default_delete<pf::ArchiveLineParser>> { struct ArchiveLineParser {} *x_1_1_1; } x1; })archiveLineParserForIndexPath:(NSString *)arg1;
- (unsigned long long)indexFileVersion;
- (const char *)indexLabel;
- (NSString *)indexName;
- (bool)loadIndexFile:(const char *)arg1 fileSize:(long long)arg2;

@optional

- (NSString *)dataArchivePath;
- (bool)indexSupported;

@end
