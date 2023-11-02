
@interface SSFlowHostCache : NSObject {
    NSMutableDictionary * _dict;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
