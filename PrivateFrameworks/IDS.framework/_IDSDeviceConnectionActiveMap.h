
@interface _IDSDeviceConnectionActiveMap : NSObject {
    NSMutableDictionary * _activeConnectionMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _writeLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)hasActiveConnection:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)removeActiveConnection:(id)arg1 forKey:(id)arg2;
- (void)setActiveConnection:(id)arg1 forKey:(id)arg2;

@end
