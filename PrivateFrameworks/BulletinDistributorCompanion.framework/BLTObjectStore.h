
@interface BLTObjectStore : NSObject {
    Class  _elementClass;
    NSString * _path;
}

- (void).cxx_destruct;
- (id)initWithPath:(id)arg1 elementClass:(Class)arg2;
- (id)keys;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)storeObject:(id)arg1 withKey:(id)arg2;

@end
