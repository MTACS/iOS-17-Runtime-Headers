
@interface MRAVDistantExternalDeviceFactory : NSObject {
    NSMutableDictionary * _distantExternalDevices;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) NSArray *externalDevices;

- (void).cxx_destruct;
- (id)_withLock_createDistantExternalDeviceForEndpoint:(id)arg1;
- (void)_withLock_purgeCache;
- (id)description;
- (id)distantExternalDeviceForEndpoint:(id)arg1;
- (id)externalDevices;
- (id)init;

@end
