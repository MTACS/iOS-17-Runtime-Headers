
@interface CPThreadSafeMutableSet : NSObject {
    NSMutableSet * _mutableSet;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _operationLock;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } operationLock;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (bool)containsObject:(id)arg1;
- (id)description;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })operationLock;
- (void)unionSet:(id)arg1;

@end
