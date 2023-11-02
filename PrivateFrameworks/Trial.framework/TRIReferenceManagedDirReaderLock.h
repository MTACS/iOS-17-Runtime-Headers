
@interface TRIReferenceManagedDirReaderLock : NSObject {
    NSString * _dir;
    _PASLock * _lock;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithDir:(id)arg1;
- (void)unlock;

@end
