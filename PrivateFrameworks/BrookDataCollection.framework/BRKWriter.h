
@interface BRKWriter : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _path;
}

@property (nonatomic, readonly) NSString *path;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (id)path;
- (void)performWithLock:(id /* block */)arg1;

@end
