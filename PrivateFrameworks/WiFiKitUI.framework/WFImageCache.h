
@interface WFImageCache : NSObject {
    NSMutableDictionary * _backingStore;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSMutableDictionary *backingStore;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;

- (void).cxx_destruct;
- (id)backingStore;
- (struct CGImage { }*)imageForKey:(id)arg1;
- (id)init;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)removeAllObjects;
- (void)setImage:(struct CGImage { }*)arg1 forKey:(id)arg2;

@end
