
@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {
    struct InodeDevPair { 
        int dev; 
        unsigned long long inode; 
    }  inodeDevPair;
}

- (void)close;
- (id)description;
- (unsigned long long)hash;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;

@end
