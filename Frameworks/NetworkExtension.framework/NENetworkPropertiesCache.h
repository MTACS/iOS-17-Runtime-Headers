
@interface NENetworkPropertiesCache : NSObject {
    NSDictionary * _cache;
    NSURL * _cacheFileURL;
    NSString * _keychainIdentifier;
    int  _notifyToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
}

@property (nonatomic, retain) NSURL *cacheFileURL;
@property (nonatomic, retain) NSString *keychainIdentifier;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)cacheFileURL;
- (void)clear;
- (id)copyPropertiesForNetworkPath:(id)arg1;
- (id)init;
- (id)keychainIdentifier;
- (void)rotateEncryptionKey;
- (void)setCacheFileURL:(id)arg1;
- (void)setKeychainIdentifier:(id)arg1;
- (void)setProperties:(id)arg1 forNetworkPath:(id)arg2;

@end
