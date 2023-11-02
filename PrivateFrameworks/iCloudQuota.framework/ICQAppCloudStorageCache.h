
@interface ICQAppCloudStorageCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSMutableDictionary * _hashMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)cloudStorageByApp:(id)arg1 forAltDSID:(id)arg2;
- (id)init;
- (void)setCloudStorage:(id)arg1 byApp:(id)arg2 forAltDSID:(id)arg3;

@end
