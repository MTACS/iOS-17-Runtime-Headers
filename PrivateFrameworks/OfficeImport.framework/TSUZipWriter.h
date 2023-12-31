
@interface TSUZipWriter : NSObject {
    bool  _calculateCRC;
    bool  _calculateSize;
    TSUZipWriterEntry * _currentEntry;
    long long  _currentOffset;
    NSMutableArray * _entries;
    unsigned long long  _entryDataSize;
    NSMutableArray * _entryDatas;
    unsigned short  _entryDate;
    NSMutableSet * _entryNames;
    unsigned short  _entryTime;
    NSError * _error;
    NSObject<OS_dispatch_data> * _localFileHeaderData;
    NSObject<OS_dispatch_queue> * _writeQueue;
    long long  _writtenOffset;
}

@property (nonatomic, readonly) unsigned long long archiveLength;
@property (nonatomic, readonly) <TSURandomWriteChannel> *writeChannel;

- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (void)addDataImpl:(id)arg1;
- (unsigned long long)archiveLength;
- (void)beginEntryWithName:(id)arg1;
- (void)beginEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3;
- (void)beginEntryWithNameImpl:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3;
- (id)centralFileHeaderDataForEntry:(id)arg1;
- (void)closeWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)endOfCentralDirectoryDataWithOffset:(long long)arg1 size:(long long)arg2;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg1;
- (void)finishEntry;
- (void)flushEntryData;
- (void)handleWriteError:(id)arg1;
- (id)init;
- (void)initEntryTime;
- (id)localFileHeaderDataForEntry:(id)arg1;
- (void)writeCentralDirectory;
- (id)writeChannel;
- (void)writeData:(id)arg1;
- (void)writeData:(id)arg1 offset:(long long)arg2;
- (void)writeEntryWithName:(id)arg1 fromReadChannel:(id)arg2 completion:(id /* block */)arg3;
- (void)writeEntryWithName:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3 fromReadChannel:(id)arg4 completion:(id /* block */)arg5;

@end
