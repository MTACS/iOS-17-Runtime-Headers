
@interface NSBinaryObjectStoreFile : NSObject {
    int  _databaseVersion;
    NSDictionary * _fullMetadata;
    NSMutableDictionary * _mapData;
    unsigned long long  _primaryKeyGeneration;
    NSDictionary * _storeOptions;
}

- (bool)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id*)arg4;
- (void)dealloc;

@end
