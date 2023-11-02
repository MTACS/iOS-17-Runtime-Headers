
@protocol DYCaptureStore <DYCaptureVisiting, NSObject>

@required

- (bool)adjunctFileExistsForFilename:(NSString *)arg1 error:(id*)arg2;
- (void*)allocateAndReadDataForFilenameBuffer:(const char *)arg1 outSize:(unsigned long long*)arg2 error:(id*)arg3;
- (void)cacheAllResources;
- (void)close;
- (NSMutableData *)copyAdjunctDataForFilename:(NSString *)arg1 error:(id*)arg2;
- (NSMutableData *)copyDataForFilePosition:(unsigned long long)arg1 error:(id*)arg2;
- (NSData *)copyDataForFilename:(NSString *)arg1 error:(id*)arg2;
- (NSData *)copyDataForFilenameBuffer:(const char *)arg1 error:(id*)arg2;
- (bool)fileExistsForFilename:(NSString *)arg1 error:(id*)arg2;
- (bool)fileExistsForFilenameBuffer:(const char *)arg1 error:(id*)arg2;
- (NSArray *)filenamesWithPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (NSArray *)filenamesWithPrefix:(NSString *)arg1 error:(id*)arg2;
- (NSString *)getFilenameForFilePosition:(unsigned long long)arg1 error:(id*)arg2;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 forFilePosition:(unsigned long long)arg2 error:(id*)arg3;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 forFilename:(NSString *)arg2 error:(id*)arg3;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 forFilenameBuffer:(const char *)arg2 error:(id*)arg3;
- (struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })getSortedFilePositionsForDataCaching;
- (id)metadataValueForKey:(NSString *)arg1;
- (DYCaptureFile *)openFileWithFilename:(NSString *)arg1 error:(id*)arg2;
- (long long)readDataForFilePosition:(unsigned long long)arg1 buffer:(void*)arg2 size:(unsigned long long)arg3 error:(id*)arg4;
- (long long)readDataForFilename:(NSString *)arg1 buffer:(void*)arg2 size:(unsigned long long)arg3 error:(id*)arg4;
- (long long)readDataForFilenameBuffer:(const char *)arg1 buffer:(void*)arg2 size:(unsigned long long)arg3 error:(id*)arg4;
- (void)releaseBytesForFilePosition:(unsigned long long)arg1;
- (bool)requestDataForFilePosition:(unsigned long long)arg1 buffer:(void**)arg2 size:(unsigned long long*)arg3 error:(id*)arg4;
- (NSString *)resolveFilename:(NSString *)arg1 error:(id*)arg2;

@end
