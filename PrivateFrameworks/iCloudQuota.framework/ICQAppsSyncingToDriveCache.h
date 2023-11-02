
@interface ICQAppsSyncingToDriveCache : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSMutableDictionary * _hashMap;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)appsSyncingToDriveforAltDSID:(id)arg1;
- (id)init;
- (void)setAppsSyncingToDrive:(id)arg1 forAltDSID:(id)arg2;

@end
