
@interface _LocalizedImageCache : NSObject {
    NSMutableDictionary * _cache;
}

- (void).cxx_destruct;
- (void)_localeChanged;
- (void)dealloc;
- (id)imageForKey:(id)arg1;
- (id)init;
- (void)removeAllObjects;
- (void)setImage:(id)arg1 forKey:(id)arg2;

@end
