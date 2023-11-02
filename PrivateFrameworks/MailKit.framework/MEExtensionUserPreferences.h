
@interface MEExtensionUserPreferences : NSObject {
    NSMutableDictionary * _extensionIDToUserEnabledMap;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) NSMutableDictionary *extensionIDToUserEnabledMap;

+ (id)log;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_loadUserPreferences;
- (id)_plistURL;
- (id)_prefsDictionary;
- (void)_savePreferences;
- (id)_serializedData;
- (id)extensionIDToUserEnabledMap;
- (bool)isExtensionEnabled:(id)arg1;
- (void)setExtensionEnabled:(bool)arg1 forExtensionID:(id)arg2;
- (void)setExtensionIDToUserEnabledMap:(id)arg1;

@end
