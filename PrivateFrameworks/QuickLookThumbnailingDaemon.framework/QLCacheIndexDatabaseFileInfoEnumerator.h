
@interface QLCacheIndexDatabaseFileInfoEnumerator : QLCacheIndexDatabaseGenericEnumerator {
    bool  _extraInfo;
    QLCacheVersionedFileIdentifier * _fileIdentifier;
    bool  _ubiquitous;
}

- (void).cxx_destruct;
- (id)initWithSqliteDatabase:(id)arg1 toEnumerateUbiquitousFiles:(bool)arg2 extraInfo:(bool)arg3;
- (bool)nextFileWithCacheId:(unsigned long long*)arg1 versionedFileIdentifier:(id*)arg2 thumbnailCount:(unsigned int*)arg3 minSize:(float*)arg4 maxSize:(float*)arg5 totalDataLength:(unsigned long long*)arg6;

@end
