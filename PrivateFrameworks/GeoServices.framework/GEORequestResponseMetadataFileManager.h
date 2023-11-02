
@interface GEORequestResponseMetadataFileManager : NSObject {
    NSObject<OS_dispatch_source> * _closeTimer;
    NSString * _fileDirectory;
    NSMutableDictionary * _metadataFiles;
    bool  _needDir;
    NSObject<OS_dispatch_queue> * _syncQ;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_closeFiles;
- (bool)_createIfNeededRequestResponseMetadataDirectory:(id)arg1;
- (id)_filepathFromBatchID:(unsigned long long)arg1;
- (void)_startTimer;
- (void)commoninit;
- (int)fileDescriptorOfRequestResponseMetadataFileForBatchID:(unsigned long long)arg1;
- (id)init;
- (id)initWithDirectory:(id)arg1;
- (void)saveRequestResponseMetadata:(id)arg1 batchID:(unsigned long long)arg2;

@end
