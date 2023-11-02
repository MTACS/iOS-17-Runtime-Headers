
@interface NRCallbackArray : NSObject {
    NSMutableArray * _callbacks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (void)addObject:(id /* block */)arg1;
- (id)init;
- (void)sweepWithCollection:(id)arg1;

@end
