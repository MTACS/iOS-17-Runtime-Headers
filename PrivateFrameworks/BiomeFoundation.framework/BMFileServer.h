
@interface BMFileServer : NSObject <BMFileServer> {
    NSString * _directory;
    BMFileManager * _fileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureConnectionForUseCase:(id)arg1 reply:(id /* block */)arg2;
- (void)createDirectoryAtPath:(id)arg1 reply:(id /* block */)arg2;
- (id)currentUseCase;
- (bool)entitledToAccessClientCompute:(id)arg1 error:(id*)arg2;
- (bool)entitledToAccessStream:(id)arg1 withMode:(int)arg2 error:(id*)arg3;
- (void)fileHandleForFileAtPath:(id)arg1 flags:(int)arg2 protection:(int)arg3 reply:(id /* block */)arg4;
- (id)initWithDirectory:(id)arg1;
- (void)removeDirectoryAtPath:(id)arg1 reply:(id /* block */)arg2;
- (void)removeFileAtPath:(id)arg1 reply:(id /* block */)arg2;
- (void)replaceFileAtPath:(id)arg1 withFileHandle:(id)arg2 protection:(int)arg3 reply:(id /* block */)arg4;
- (void)temporaryFileHandleWithProtection:(int)arg1 reply:(id /* block */)arg2;

@end
