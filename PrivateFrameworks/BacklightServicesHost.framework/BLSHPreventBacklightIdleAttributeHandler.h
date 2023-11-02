
@interface BLSHPreventBacklightIdleAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    bool  _active;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHBacklightIdleProvider * _provider;
}

@property (nonatomic, readonly) BLSHBacklightIdleProvider *provider;

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)arg1 provider:(id)arg2;

- (void).cxx_destruct;
- (void)activate:(bool)arg1 withEntry:(id)arg2;
- (void)activateWithFirstEntry:(id)arg1;
- (id)countingTargetForEntry:(id)arg1;
- (void)deactivateWithFinalEntry:(id)arg1;
- (id)initForService:(id)arg1 provider:(id)arg2;
- (id)provider;
- (long long)typeForEntry:(id)arg1;

@end
