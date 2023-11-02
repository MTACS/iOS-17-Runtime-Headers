
@interface AMSThreadSafeObject : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id  _underlyingObject;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) id underlyingObject;

- (void).cxx_destruct;
- (id)accessAndSetObjectWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithObject:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)object;
- (void)read:(id /* block */)arg1;
- (void)readWrite:(id /* block */)arg1;
- (void)setObject:(id)arg1;
- (void)setUnderlyingObject:(id)arg1;
- (id)underlyingObject;

@end
