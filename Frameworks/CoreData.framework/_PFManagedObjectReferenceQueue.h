
@interface _PFManagedObjectReferenceQueue : NSObject {
    int  _cd_rc;
    NSManagedObjectContext * _context;
    int  _flags;
    int  _processing;
    struct __CFArray { } * _queue;
    struct __CFRunLoopObserver { } * _rlObserver;
    int  _signalRunloop;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _spinLock;
}

- (bool)_isDeallocating;
- (bool)_tryRetain;
- (void)dealloc;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
