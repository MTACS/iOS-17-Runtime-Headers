
@interface CRKFileWrapperBackedFileSystemNode : NSObject <CRKFileSystemNode> {
    NSFileWrapper * _fileWrapper;
    NSFileWrapper * _parentFileWrapper;
}

@property (nonatomic, readonly, copy) NSDictionary *children;
@property (nonatomic, readonly, copy) NSData *content;
@property (nonatomic, copy) NSString *fileName;
@property (nonatomic, readonly) NSFileWrapper *fileWrapper;
@property (nonatomic, readonly) NSFileWrapper *parentFileWrapper;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)addChildWithDescriptor:(id)arg1;
- (id)children;
- (id)content;
- (id)fileName;
- (id)fileWrapper;
- (id)initWithFileWrapper:(id)arg1;
- (id)initWithFileWrapper:(id)arg1 parentFileWrapper:(id)arg2;
- (id)parentFileWrapper;
- (void)removeFromParent;
- (void)setFileName:(id)arg1;
- (long long)type;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
