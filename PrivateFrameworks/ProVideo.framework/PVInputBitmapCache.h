
@interface PVInputBitmapCache : NSObject {
    NSMutableDictionary * _cache;
    unsigned long long  _countLimit;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didRecieveMemoryWarning:(id)arg1;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)purge:(bool)arg1;
- (void)setCountLimit:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
