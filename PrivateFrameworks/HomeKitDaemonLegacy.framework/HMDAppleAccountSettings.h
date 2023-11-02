
@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _ephemeral;
    bool  _homeEnabled;
    bool  _keychainSyncEnabled;
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    bool  _managed;
    bool  _migrated;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEducationMode, readonly) bool educationMode;
@property (getter=isEphemeral, readonly) bool ephemeral;
@property (readonly) unsigned long long hash;
@property (getter=isHomeEnabled, readonly) bool homeEnabled;
@property (getter=isKeychainSyncEnabled, readonly) bool keychainSyncEnabled;
@property (getter=isManaged, readonly) bool managed;
@property (nonatomic) bool migrated;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedSettings;
+ (bool)supportsCloudSettings;

- (void).cxx_destruct;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__synchronize;
- (void)__updateHomeEnabled:(bool)arg1 userInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_notifyClientsOfUpdatedHomeState:(bool)arg1 userInitiated:(bool)arg2;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(bool)arg1;
- (id)attributeDescriptions;
- (id)clientQueue;
- (void)enableHome:(bool)arg1 userInitiated:(bool)arg2;
- (void)handleManateeAvailabilityNotification:(id)arg1;
- (id)init;
- (bool)isEducationMode;
- (bool)isEphemeral;
- (bool)isHomeEnabled;
- (bool)isKeychainSyncEnabled;
- (bool)isManaged;
- (bool)migrated;
- (void)setMigrated:(bool)arg1;
- (void)synchronize;
- (void)updateHomeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
