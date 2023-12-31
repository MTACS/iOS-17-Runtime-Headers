
@interface SUImageCache : NSObject {
    CPLRUDictionary * _dictionary;
}

- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;
- (void)dealloc;
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;
- (id)init;
- (id)initWithMaximumCapacity:(long long)arg1;
- (void)removeAllCachedImages;

@end
