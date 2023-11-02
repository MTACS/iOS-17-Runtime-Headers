
@interface DNDSJSONBackingStore : NSObject <DNDSBackingStore, DNDSSysdiagnoseDataProvider> {
    <DNDSBackingStoreDelegate> * _delegate;
    bool  _deviceOutOfSpace;
    NSURL * _fileURL;
    Class  _recordClass;
    NSURL * _secureFileURL;
    unsigned long long  _securityClass;
    unsigned long long  _versionNumber;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DNDSBackingStoreDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *sysdiagnoseDataIdentifier;

+ (unsigned long long)dataWritingOptionsForSecurityClass:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 secureFileURL:(id)arg3 versionNumber:(unsigned long long)arg4 securityClass:(unsigned long long)arg5;
- (id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3;
- (id)readRecordDictionaryfromURL:(id)arg1 withError:(id*)arg2;
- (id)readRecordWithError:(id*)arg1;
- (void)setDelegate:(id)arg1;
- (id)sysdiagnoseDataForDate:(id)arg1 redacted:(bool)arg2;
- (id)sysdiagnoseDataIdentifier;
- (unsigned long long)writeRecord:(id)arg1 error:(id*)arg2;
- (unsigned long long)writeRecord:(id)arg1 writePartition:(bool)arg2 error:(id*)arg3;
- (unsigned long long)writeRecordDictionary:(id)arg1 withSecurityClass:(unsigned long long)arg2 toURL:(id)arg3 error:(id*)arg4;

@end
