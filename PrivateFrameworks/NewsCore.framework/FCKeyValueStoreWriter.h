
@interface FCKeyValueStoreWriter : NSObject {
    PBDataWriter * _dataWriter;
    NSOutputStream * _tempFileOutputStream;
    NSString * _tempFilePath;
}

@property (nonatomic, readonly) PBDataWriter *dataWriter;
@property (nonatomic, readonly) NSOutputStream *tempFileOutputStream;
@property (nonatomic, readonly) NSString *tempFilePath;

- (void).cxx_destruct;
- (unsigned long long)_flushToDisk;
- (unsigned long long)_flushToDiskIfNeeded;
- (bool)_moveTempFileToPath:(id)arg1;
- (id)dataWriter;
- (id)init;
- (id)tempFileOutputStream;
- (id)tempFilePath;
- (bool)writeKVS:(id)arg1 codables:(id)arg2 toFile:(id)arg3 size:(unsigned long long*)arg4;

@end
