
@interface FMDataArchiver : NSObject {
    bool  _backedUp;
    bool  _createDirectories;
    long long  _dataProtectionClass;
    NSURL * _fileURL;
    NSData * _unitTestData;
}

@property (nonatomic) bool backedUp;
@property (nonatomic) bool createDirectories;
@property (nonatomic) long long dataProtectionClass;
@property (nonatomic, retain) NSURL *fileURL;
@property (nonatomic, copy) NSData *unitTestData;

+ (id)defaultClasses;

- (void).cxx_destruct;
- (bool)backedUp;
- (bool)createDirectories;
- (long long)dataProtectionClass;
- (unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1;
- (void)injectUnitTestData:(id)arg1;
- (id)readArrayAndClasses:(id)arg1 error:(id*)arg2;
- (id)readDataOfClasses:(id)arg1 error:(id*)arg2;
- (id)readDictionaryAndClasses:(id)arg1 error:(id*)arg2;
- (id)saveArray:(id)arg1;
- (bool)saveArray:(id)arg1 error:(id*)arg2;
- (id)saveDictionary:(id)arg1;
- (bool)saveDictionary:(id)arg1 error:(id*)arg2;
- (id)saveObject:(id)arg1;
- (void)setBackedUp:(bool)arg1;
- (void)setCreateDirectories:(bool)arg1;
- (void)setDataProtectionClass:(long long)arg1;
- (void)setFileURL:(id)arg1;
- (void)setUnitTestData:(id)arg1;
- (id)underlyingDataWithError:(id*)arg1;
- (id)unitTestData;

@end
