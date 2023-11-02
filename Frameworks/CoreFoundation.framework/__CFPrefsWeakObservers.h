
@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {
    unsigned long long  count;
    struct __cfobservers_t { 
        id slot; 
        struct __cfobservers_t {} *next; 
    }  values;
}

- (unsigned char)addObject:(id)arg1;
- (unsigned long long)approximateCount;
- (unsigned long long)borrowObjects:(id*)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)removeObject:(id)arg1;

@end
