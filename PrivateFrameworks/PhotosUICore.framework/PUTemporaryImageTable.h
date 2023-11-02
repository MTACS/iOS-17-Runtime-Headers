
@interface PUTemporaryImageTable : PLTemporaryImageTable {
    _Atomic int  _indexCounter;
}

- (int)nextCacheIndex;

@end
