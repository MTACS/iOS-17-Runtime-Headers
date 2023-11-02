
@interface GTFileWriterSessionUncompressed : NSObject <GTFileWriterSession> {
    NSURL * _baseURL;
    unsigned long long  _currentFileBytesWritten;
    unsigned long long  _currentFileIndex;
    int  _fd;
    NSArray * _fileEntries;
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sessionWithFileEntries:(id)arg1 relativeToURL:(id)arg2 options:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_closeCurrentFileDescriptor;
- (int)_getCurrentFileDescriptor:(id*)arg1;
- (int)_openNextFile:(id*)arg1;
- (bool)_writeUncompressedFileData:(const char *)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (bool)finish:(id*)arg1;
- (id)initWithFileEntries:(id)arg1 relativeToURL:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)writeFileData:(id)arg1 completionHandler:(id /* block */)arg2;

@end
