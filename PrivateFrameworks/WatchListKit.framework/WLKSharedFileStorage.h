
@interface WLKSharedFileStorage : NSObject {
    Class  _class;
    NSFileCoordinator * _coordinator;
    NSString * _debugString;
    NSURL * _fileURL;
}

- (void).cxx_destruct;
- (id)_readDataFromURL:(id)arg1 error:(id*)arg2;
- (bool)_writeData:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (void)delete:(id /* block */)arg1;
- (id)initWithFileName:(id)arg1 class:(Class)arg2;
- (void)merge:(id)arg1 completion:(id /* block */)arg2;
- (void)read:(id /* block */)arg1;
- (void)write:(id)arg1 completion:(id /* block */)arg2;

@end
