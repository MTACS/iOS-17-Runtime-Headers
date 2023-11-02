
@interface EKImageCache : NSObject {
    NSMutableDictionary * _cache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

- (void).cxx_destruct;
- (id)init;
- (id)persistentImageForSourceID:(id)arg1 identifier:(id)arg2;
- (void)uncacheImage:(id)arg1;
- (void)updateToCachedVersionOrCacheImage:(id)arg1;

@end
