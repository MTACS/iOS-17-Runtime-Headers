
@protocol UMFilesystemProviding <NSObject>

@required

- (bool)atomicallyWriteData:(NSData *)arg1 toPath:(NSString *)arg2 error:(id*)arg3;
- (bool)chmodPath:(NSString *)arg1 withMode:(unsigned short)arg2 error:(id*)arg3;
- (bool)chownPath:(NSString *)arg1 toUser:(unsigned int)arg2 group:(unsigned int)arg3 error:(id*)arg4;
- (bool)clonePath:(void *)arg1 toPath:(void *)arg2 error:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 12: NSString *, NSString *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, int, id /* block */, int, int, NSString *, NSString *, void*
- (void)closeFileWithDescriptor:(int)arg1;
- (NSData *)dataWithContentsOfFile:(NSString *)arg1 error:(id*)arg2;
- (bool)fileExistsAtPath:(NSString *)arg1 isDirectory:(bool*)arg2;
- (bool)makePath:(NSString *)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
- (int)openFileForAppendingAtPath:(NSString *)arg1 error:(id*)arg2;
- (bool)removeFileAtPath:(NSString *)arg1 error:(id*)arg2;
- (bool)removePath:(NSString *)arg1 error:(id*)arg2;
- (bool)renameFileFromPath:(NSString *)arg1 toPath:(NSString *)arg2 error:(id*)arg3;
- (long long)sizeOfFileWithDescriptor:(int)arg1 error:(id*)arg2;
- (bool)writeToFileWithDescriptor:(int)arg1 string:(NSString *)arg2 error:(id*)arg3;

@end
