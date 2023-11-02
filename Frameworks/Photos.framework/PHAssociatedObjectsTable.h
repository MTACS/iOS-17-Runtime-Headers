
@interface PHAssociatedObjectsTable : NSObject {
    NSMapTable * _buckets;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _locks;
}

@property (readonly) long long stripeCount;

- (void).cxx_destruct;
- (id)associatedObjectOnObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)removeAllAssociatedObjectsOnObject:(id)arg1;
- (void)removeAssociatedObjectOnObject:(id)arg1 forKey:(id)arg2;
- (void)setAssociatedObject:(id)arg1 onObject:(id)arg2 forKey:(id)arg3;
- (id)setAssociatedObjectIfNotSet:(id)arg1 onObject:(id)arg2 forKey:(id)arg3;
- (long long)stripeCount;

@end
