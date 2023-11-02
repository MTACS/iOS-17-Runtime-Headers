
@interface AVDispatchOnce : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _testFlag;
}

- (id)init;
- (void)runBlockOnce:(id /* block */)arg1;

@end
