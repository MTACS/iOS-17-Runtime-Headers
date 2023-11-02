
@interface HMDApplicationInfo : HMFObject <HMFLogging> {
    NSString * _bundleIdentifier;
    HMDApplicationInfo * _companionApplicationInfo;
    bool  _independent;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _processes;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSURL *bundleURL;
@property (readonly) HMDApplicationInfo *companionApplicationInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntitledForAPIAccess, readonly) bool entitledForAPIAccess;
@property (getter=isEntitledForSPIAccess, readonly) bool entitledForSPIAccess;
@property (readonly) unsigned long long hash;
@property (readonly) HMDApplicationInfo *hostApplicationInfo;
@property (getter=isIndependent, readonly) bool independent;
@property (getter=isInstalled, readonly) bool installed;
@property (readonly, copy) NSArray *processes;
@property (readonly) Class superclass;
@property (readonly, copy) NSData *vendorIdentifier;

+ (id)applicationInfoForBundleIdentifier:(id)arg1;
+ (id)applicationInfoForBundleURL:(id)arg1;
+ (id)logCategory;
+ (id)privateVendorIdentifier;

- (void).cxx_destruct;
- (void)addProcess:(id)arg1;
- (id)attributeDescriptions;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)clientIdentifierSalt:(id*)arg1;
- (id)companionApplicationInfo;
- (unsigned long long)hash;
- (id)hostApplicationInfo;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isEntitledForAPIAccess;
- (bool)isEntitledForSPIAccess;
- (bool)isEqual:(id)arg1;
- (bool)isIndependent;
- (bool)isInstalled;
- (id)logIdentifier;
- (id)processes;
- (void)removeProcess:(id)arg1;
- (id)shortDescription;
- (id)vendorIdentifier;

@end
