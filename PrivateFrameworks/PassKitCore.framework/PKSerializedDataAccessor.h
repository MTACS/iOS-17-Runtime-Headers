
@interface PKSerializedDataAccessor : PKFileDataAccessor {
    NSData * _archiveData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)_downloadRemoteAssetsWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (id)_initWithFileURL:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)archiveData;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2 outputURL:(id)arg3;
- (id)initWithFileDescriptor:(int)arg1 error:(id*)arg2;
- (id)initWithFileDescriptor:(int)arg1 error:(id*)arg2 outputURL:(id)arg3;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2 coordinator:(id)arg3;

@end
