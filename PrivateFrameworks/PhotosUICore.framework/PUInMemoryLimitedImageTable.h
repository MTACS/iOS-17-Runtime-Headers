
@interface PUInMemoryLimitedImageTable : PUTemporaryImageTable {
    NSCache * _memoryCache;
}

- (void).cxx_destruct;
- (id)imageForItemAtIndex:(unsigned long long)arg1;
- (void)removeItemAtIndex:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(unsigned long long)arg2;

@end
