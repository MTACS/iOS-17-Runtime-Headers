
@interface UMFilesystemProvider : NSObject <UMFilesystemProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)atomicallyWriteData:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (bool)chmodPath:(id)arg1 withMode:(unsigned short)arg2 error:(id*)arg3;
- (bool)chownPath:(id)arg1 toUser:(unsigned int)arg2 group:(unsigned int)arg3 error:(id*)arg4;
- (bool)clonePath:(id)arg1 toPath:(id)arg2 error:(id*)arg3 handler:(id /* block */)arg4;
- (void)closeFileWithDescriptor:(int)arg1;
- (id)dataWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (bool)fileExistsAtPath:(id)arg1 isDirectory:(bool*)arg2;
- (bool)makePath:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
- (int)openFileForAppendingAtPath:(id)arg1 error:(id*)arg2;
- (bool)removeFileAtPath:(id)arg1 error:(id*)arg2;
- (bool)removePath:(id)arg1 error:(id*)arg2;
- (bool)renameFileFromPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (long long)sizeOfFileWithDescriptor:(int)arg1 error:(id*)arg2;
- (bool)writeToFileWithDescriptor:(int)arg1 string:(id)arg2 error:(id*)arg3;

@end
