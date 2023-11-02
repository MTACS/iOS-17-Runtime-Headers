
@interface EFResource : NSObject <NSLocking> {
    _Atomic long long  _lockCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfair_lock;
}

- (void)holdResource;
- (id)init;
- (void)lock;
- (bool)returnResource;
- (void)unlock;

@end
