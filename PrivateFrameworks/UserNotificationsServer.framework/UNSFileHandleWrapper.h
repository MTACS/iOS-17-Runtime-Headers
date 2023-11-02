
@interface UNSFileHandleWrapper : NSObject {
    NSFileHandle * _fileHandle;
    NSString * _path;
}

@property (nonatomic, retain) NSFileHandle *fileHandle;
@property (nonatomic, copy) NSString *path;

- (void).cxx_destruct;
- (id)fileHandle;
- (id)path;
- (void)setFileHandle:(id)arg1;
- (void)setPath:(id)arg1;

@end
