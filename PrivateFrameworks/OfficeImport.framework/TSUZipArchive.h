
@interface TSUZipArchive : NSObject {
    NSMutableDictionary * _entries;
}

@property (nonatomic, readonly) unsigned long long archiveLength;
@property (nonatomic, readonly) <TSUReadChannel> *readChannel;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (unsigned long long)archiveLength;
- (id)debugDescription;
- (id)entryForName:(id)arg1;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (id)init;
- (void)readArchiveWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned long long)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (void)readCentralDirectoryWithEntryCount:(unsigned long long)arg1 offset:(long long)arg2 size:(long long)arg3 channel:(id)arg4 queue:(id)arg5 completion:(id /* block */)arg6;
- (bool)readCentralFileHeaderWithBuffer:(const void**)arg1 dataSize:(unsigned long long*)arg2;
- (id)readChannel;
- (id)readChannelForEntry:(id)arg1;
- (void)readEndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;

@end
