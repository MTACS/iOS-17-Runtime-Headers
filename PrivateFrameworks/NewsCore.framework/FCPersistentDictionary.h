
@interface FCPersistentDictionary : NSObject {
    NSSet * _allowedClasses;
    NSURL * _fileURL;
}

@property (nonatomic, readonly, copy) NSSet *allowedClasses;
@property (nonatomic, readonly, copy) NSURL *fileURL;

- (void).cxx_destruct;
- (id)allowedClasses;
- (id)fileURL;
- (id)init;
- (id)initWithFileURL:(id)arg1 allowedClasses:(id)arg2;
- (id)read;
- (bool)writeWithAccessor:(id /* block */)arg1;

@end
