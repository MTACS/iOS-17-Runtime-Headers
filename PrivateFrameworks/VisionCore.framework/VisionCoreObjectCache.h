
@interface VisionCoreObjectCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSMutableDictionary * _objects;
}

- (void).cxx_destruct;
- (id)init;
- (id)objectForIdentifier:(id)arg1 creationBlock:(id /* block */)arg2 error:(id*)arg3;
- (void)removeAllObjects;

@end
