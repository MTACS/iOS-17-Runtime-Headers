
@interface QLDiskCacheFileInfoEnumerator : QLDiskCacheEnumerator {
    bool  _extraInfo;
    QLCacheIndexDatabaseFileInfoEnumerator * _indexEnumerator;
    bool  _ubiquitous;
}

- (void).cxx_destruct;
- (id)initWithDiskCache:(id)arg1 forUbiquitousFiles:(bool)arg2 extraInfo:(bool)arg3;
- (id)nextFileInfo;

@end
