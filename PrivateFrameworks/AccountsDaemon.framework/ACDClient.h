
@interface ACDClient : NSObject {
    struct __CFBundle { } * _bundle;
    NSString * _bundleID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientPropertyLock;
    NSXPCConnection * _connection;
    bool  _didManuallySetBundleID;
    NSMutableDictionary * _entitlementChecks;
    ACDAccountStoreFilter * _filter;
    NSString * _localizedAppName;
    NSSet * _monitoredAccountTypes;
    NSString * _name;
    NSNumber * _pid;
    NSArray * _prefetchedProperties;
}

@property (nonatomic, readonly) NSString *adamOrDisplayID;
@property (nonatomic, readonly) struct __CFBundle { }*bundle;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, retain) ACDAccountStoreFilter *filter;
@property (nonatomic, readonly) NSString *localizedAppName;
@property (nonatomic, retain) NSSet *monitoredAccountTypes;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *pid;
@property (nonatomic, retain) NSArray *prefetchedProperties;

+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)_bundleForPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromLaunchServicesForPID:(int)arg1;
- (id)_rawValueForEntitlement:(id)arg1;
- (id)adamOrDisplayID;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (id)connection;
- (void)dealloc;
- (id)description;
- (id)filter;
- (bool)hasEntitlement:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (id)localizedAppName;
- (id)monitoredAccountTypes;
- (id)name;
- (id)pid;
- (id)prefetchedProperties;
- (void)setBundleID:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setMonitoredAccountTypes:(id)arg1;
- (void)setPrefetchedProperties:(id)arg1;

@end
