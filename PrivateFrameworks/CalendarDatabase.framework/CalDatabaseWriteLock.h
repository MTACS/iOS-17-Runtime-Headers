
@interface CalDatabaseWriteLock : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)canonicalizePath:(id)arg1;
+ (id)writeLockForDatabasePath:(id)arg1;

- (id)init;
- (void)lock;
- (void)performWithWriteLock:(id /* block */)arg1;
- (void)unlock;

@end
