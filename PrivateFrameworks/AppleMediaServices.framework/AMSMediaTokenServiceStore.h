
@interface AMSMediaTokenServiceStore : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSString * _clientIdentifier;
    NSString * _keychainAccessGroup;
    AMSMediaTokenServiceKeychainStore * _keychainStore;
    AMSMediaToken * _memoryMediaToken;
    NSString * _notificationObject;
    bool  _usingAccessControlIdentifier;
}

@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } accessLock;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *keychainAccessGroup;
@property (nonatomic, readonly) AMSMediaTokenServiceKeychainStore *keychainStore;
@property (nonatomic, retain) AMSMediaToken *memoryMediaToken;
@property (nonatomic, readonly) NSString *notificationObject;
@property (nonatomic, readonly) bool usingAccessControlIdentifier;

+ (bool)_hasAppleGroupEnabled;

- (void).cxx_destruct;
- (void)_deleteMediaTokenFromUserDefaultsIfPresent;
- (id)_keychainAccessGroup;
- (void)_mediaTokenChanged:(id)arg1;
- (id)_mediaTokenChangedNotificationName;
- (id)_mediaTokenFromUserDefaults;
- (void)_setupKeychainNotifications;
- (void)_teardownKeychainNotifications;
- (struct os_unfair_lock_s { unsigned int x1; })accessLock;
- (id)clientIdentifier;
- (void)dealloc;
- (void)deleteToken;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2;
- (id)initWithClientIdentifier:(id)arg1 keychainAccessGroup:(id)arg2 usingAccessControlIdentifier:(bool)arg3;
- (id)initWithClientIdentifier:(id)arg1 keychainStore:(id)arg2;
- (id)keychainAccessGroup;
- (id)keychainStore;
- (id)memoryMediaToken;
- (id)notificationObject;
- (id)retrieveToken;
- (void)setKeychainAccessGroup:(id)arg1;
- (void)setMemoryMediaToken:(id)arg1;
- (void)storeToken:(id)arg1;
- (bool)usingAccessControlIdentifier;

@end
