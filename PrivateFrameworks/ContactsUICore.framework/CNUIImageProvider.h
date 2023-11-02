
@interface CNUIImageProvider : NSObject

+ (id)cacheKeyForImageResourceName:(id)arg1 template:(bool)arg2;
+ (id)imageForResource:(id)arg1;
+ (id)imageForResource:(id)arg1 template:(bool)arg2;
+ (id)imageForResource:(id)arg1 template:(bool)arg2 onCacheMiss:(id /* block */)arg3;
+ (id)uncachedImageForResource:(id)arg1 template:(bool)arg2;

@end
