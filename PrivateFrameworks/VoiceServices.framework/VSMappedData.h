
@interface VSMappedData : NSObject {
    NSMutableData * _fallbackInMemoryData;
    NSString * _filePath;
    unsigned long long  _mappedLength;
    void * _mmappedData;
    bool  _shouldCleanFile;
    unsigned long long  _totalLength;
}

@property (nonatomic, retain) NSMutableData *fallbackInMemoryData;
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic) unsigned long long mappedLength;
@property (nonatomic) void*mmappedData;
@property (nonatomic) bool shouldCleanFile;
@property (nonatomic) unsigned long long totalLength;

- (void).cxx_destruct;
- (void)_appendToFallbackMemory:(id)arg1;
- (void)_appendToMappedMemory:(id)arg1;
- (void)_convertToFallbackMemory;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })appendData:(id)arg1;
- (void*)bytesAtOffset:(unsigned long long)arg1;
- (void)dealloc;
- (id)fallbackInMemoryData;
- (id)filePath;
- (id)init;
- (id)initWithFilePath:(id)arg1 initialSize:(unsigned long long)arg2;
- (unsigned long long)mappedLength;
- (void*)mmappedData;
- (void)setFallbackInMemoryData:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setMappedLength:(unsigned long long)arg1;
- (void)setMmappedData:(void*)arg1;
- (void)setShouldCleanFile:(bool)arg1;
- (void)setTotalLength:(unsigned long long)arg1;
- (bool)shouldCleanFile;
- (unsigned long long)totalLength;

@end
