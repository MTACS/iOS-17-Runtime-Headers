
@interface BMProcess : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    NSMutableDictionary * _entitlementCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _entitlementCacheLock;
    NSString * _executablePath;
    NSString * _identifier;
    NSMutableDictionary * _machLookupCache;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _machLookupCacheLock;
    int  _pid;
    unsigned long long  _processType;
    NSNumber * _reliesOnCoreDuetAccess;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reliesOnCoreDuetAccessLock;
    unsigned int  _uid;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) NSString *executableName;
@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isLegacyAppleInternalClient;
@property (nonatomic, readonly) bool isSandboxed;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) unsigned long long processType;
@property (nonatomic, readonly) unsigned int uid;
@property (nonatomic, readonly) NSSet *useCases;

+ (id)current;
+ (id)processWithXPCConnection:(id)arg1;

- (void).cxx_destruct;
- (bool)_canTrustApplicationIdentifierEntitlement;
- (id)_initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (void)_initializeProcessProperties;
- (struct { unsigned int x1[8]; })auditToken;
- (bool)boolForEntitlement:(id)arg1;
- (void)cacheValuesForEntitlements:(id)arg1;
- (bool)canPerformFileOperation:(id)arg1 onPath:(id)arg2 report:(bool)arg3;
- (bool)canPerformGlobalMachLookup:(id)arg1 report:(bool)arg2;
- (bool)canPerformSyscall:(id)arg1 report:(bool)arg2;
- (id)description;
- (id)dictionaryForEntitlement:(id)arg1;
- (id)executableName;
- (id)executablePath;
- (bool)hasNonEmptyArrayForEntitlement:(id)arg1;
- (bool)hasNonEmptyDictionaryForEntitlement:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)isLegacyAppleInternalClient;
- (bool)isSandboxed;
- (id)nonnullArrayForEntitlement:(id)arg1;
- (id)nonnullSetOfStringsForEntitlement:(id)arg1;
- (int)pid;
- (unsigned long long)processType;
- (id)stringForEntitlement:(id)arg1;
- (unsigned int)uid;
- (id)useCases;
- (id)valueForEntitlement:(id)arg1;

@end
