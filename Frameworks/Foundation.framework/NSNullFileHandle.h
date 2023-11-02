
@interface NSNullFileHandle : NSFileHandle

- (id)availableData;
- (bool)closeAndReturnError:(out id*)arg1;
- (void)closeFile;
- (int)fileDescriptor;
- (bool)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (id /* block */)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (bool)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (bool)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (void)setReadabilityHandler:(id /* block */)arg1;
- (void)setWriteabilityHandler:(id /* block */)arg1;
- (bool)synchronizeAndReturnError:(out id*)arg1;
- (void)synchronizeFile;
- (bool)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)writeData:(id)arg1;
- (bool)writeData:(id)arg1 error:(out id*)arg2;
- (id /* block */)writeabilityHandler;

@end
