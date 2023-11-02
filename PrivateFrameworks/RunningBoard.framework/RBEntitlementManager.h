
@interface RBEntitlementManager : NSObject <RBEntitlementManaging, RBStateCapturing> {
    NSSet * _availableEntitlements;
    NSMapTable * _entitlementsByIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _restrictedEntitlements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allEntitlements;
- (id)captureState;
- (id)debugDescription;
- (id)entitlementsForProcess:(id)arg1;
- (id)initWithDomainAttributeEntitlements:(id)arg1;
- (void)purgeEntitlementsForProcess:(id)arg1;
- (id)stateCaptureTitle;

@end
