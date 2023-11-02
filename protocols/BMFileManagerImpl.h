
@protocol BMFileManagerImpl

@required

- (BMFileHandle *)_fileHandleForFileAtPath:(NSString *)arg1 flags:(int)arg2 protection:(int)arg3 error:(id*)arg4;
- (bool)_removeDirectoryAtPath:(NSString *)arg1 error:(id*)arg2;
- (bool)_removeFileAtPath:(NSString *)arg1 error:(id*)arg2;
- (BMFileHandle *)replaceFileAtPath:(NSString *)arg1 withFileHandle:(BMFileHandle *)arg2 protection:(int)arg3 error:(id*)arg4;
- (BMFileHandle *)temporaryFileHandleWithProtection:(int)arg1 error:(id*)arg2;

@end
