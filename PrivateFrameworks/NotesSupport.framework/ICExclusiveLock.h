
@interface ICExclusiveLock : NSObject <NSLocking> {
    NSString * _cachePath;
    int  _fd;
    NSString * _fullPath;
    NSString * _name;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 cachePath:(id)arg2;
- (void)lock;
- (id)name;
- (void)setName:(id)arg1;
- (bool)tryLock;
- (void)unlock;

@end
