
@interface BSSecTask : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __SecTask { } * _lock_taskRef;
}

- (void)dealloc;

@end
