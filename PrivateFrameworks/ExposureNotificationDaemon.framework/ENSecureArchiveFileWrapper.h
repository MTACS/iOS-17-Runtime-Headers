
@interface ENSecureArchiveFileWrapper : NSObject {
    int  _fileDescriptor;
    NSString * _path;
}

@property (nonatomic, readonly, copy) NSString *path;

- (void).cxx_destruct;
- (bool)_writeObject:(id)arg1 toFileDescriptor:(int)arg2 error:(id*)arg3;
- (void)close;
- (id)initWithPath:(id)arg1;
- (bool)openWithError:(id*)arg1;
- (id)path;
- (bool)readObject:(id*)arg1 ofClass:(Class)arg2 error:(id*)arg3;
- (bool)readObject:(id*)arg1 ofClasses:(id)arg2 error:(id*)arg3;
- (bool)saveObject:(id)arg1 error:(id*)arg2;

@end
