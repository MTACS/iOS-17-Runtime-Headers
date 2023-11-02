
@interface ASCLazy : NSObject {
    id /* block */  _factory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _loadingGuard;
    id  _objectIfLoaded;
}

@property (nonatomic, readonly, copy) id /* block */ factory;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } loadingGuard;
@property (readonly) id object;
@property (retain) id objectIfLoaded;

- (void).cxx_destruct;
- (id)description;
- (id /* block */)factory;
- (id)initWithFactory:(id /* block */)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })loadingGuard;
- (id)object;
- (id)objectIfLoaded;
- (void)setObjectIfLoaded:(id)arg1;

@end
