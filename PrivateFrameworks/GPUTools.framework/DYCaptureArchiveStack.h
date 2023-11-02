
@interface DYCaptureArchiveStack : NSObject <DYCaptureStore> {
    struct vector<GPUTools::objc_ref<DYCaptureArchive *>, std::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<GPUTools::objc_ref<DYCaptureArchive *> *, std::allocator<GPUTools::objc_ref<DYCaptureArchive *>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _archives;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_stackIsEmpty:(id*)arg1;
- (bool)acceptCaptureVisitor:(id)arg1;
- (bool)adjunctFileExistsForFilename:(id)arg1 error:(id*)arg2;
- (id)allObjects;
- (void*)allocateAndReadDataForFilenameBuffer:(const char *)arg1 outSize:(unsigned long long*)arg2 error:(id*)arg3;
- (void)cacheAllResources;
- (void)clear;
- (void)close;
- (id)copyAdjunctDataForFilename:(id)arg1 error:(id*)arg2;
- (id)copyDataForFilePosition:(unsigned long long)arg1 error:(id*)arg2;
- (id)copyDataForFilename:(id)arg1 error:(id*)arg2;
- (id)copyDataForFilenameBuffer:(const char *)arg1 error:(id*)arg2;
- (bool)empty;
- (bool)fileExistsForFilename:(id)arg1 error:(id*)arg2;
- (bool)fileExistsForFilenameBuffer:(const char *)arg1 error:(id*)arg2;
- (id)filenamesWithPredicate:(id)arg1 error:(id*)arg2;
- (id)filenamesWithPrefix:(id)arg1 error:(id*)arg2;
- (id)getFilenameForFilePosition:(unsigned long long)arg1 error:(id*)arg2;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 forFilePosition:(unsigned long long)arg2 error:(id*)arg3;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 forFilename:(id)arg2 error:(id*)arg3;
- (bool)getInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 forFilenameBuffer:(const char *)arg2 error:(id*)arg3;
- (struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *x_3_1_1; } x3; })getSortedFilePositionsForDataCaching;
- (id)metadataValueForKey:(id)arg1;
- (id)openFileWithFilename:(id)arg1 error:(id*)arg2;
- (void)pop;
- (void)push:(id)arg1;
- (long long)readDataForFilePosition:(unsigned long long)arg1 buffer:(void*)arg2 size:(unsigned long long)arg3 error:(id*)arg4;
- (long long)readDataForFilename:(id)arg1 buffer:(void*)arg2 size:(unsigned long long)arg3 error:(id*)arg4;
- (long long)readDataForFilenameBuffer:(const char *)arg1 buffer:(void*)arg2 size:(unsigned long long)arg3 error:(id*)arg4;
- (void)releaseBytesForFilePosition:(unsigned long long)arg1;
- (bool)requestDataForFilePosition:(unsigned long long)arg1 buffer:(void**)arg2 size:(unsigned long long*)arg3 error:(id*)arg4;
- (id)resolveFilename:(id)arg1 error:(id*)arg2;
- (unsigned long long)size;
- (id)top;

@end
