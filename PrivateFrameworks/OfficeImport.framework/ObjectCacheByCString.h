
@interface ObjectCacheByCString : NSObject {
    struct __CFDictionary { } * _dictionary;
}

- (void)dealloc;
- (id)getObjectForCStringKey:(char *)arg1;
- (id)init;
- (void)setObject:(id)arg1 forCStringKey:(char *)arg2;

@end
