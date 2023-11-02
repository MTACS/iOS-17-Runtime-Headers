
@interface SHEntitlements : NSObject {
    bool  _isEntitledForInternalClient;
    bool  _isEntitledForMicrophone;
    bool  _isEntitledForStorefront;
}

@property (nonatomic, readonly) bool isEntitledForInternalClient;
@property (nonatomic, readonly) bool isEntitledForMicrophone;
@property (nonatomic) bool isEntitledForStorefront;

- (bool)boolValueOfEntitlement:(id)arg1 fromConnection:(id)arg2;
- (bool)boolValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask { }*)arg2;
- (void)configureEntitlementsForConnection:(id)arg1;
- (void)configureEntitlementsForTask:(struct __SecTask { }*)arg1;
- (void*)copyValueOfEntitlement:(id)arg1 fromSecTask:(struct __SecTask { }*)arg2;
- (bool)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromConnection:(id)arg3;
- (bool)entitlementArray:(id)arg1 containsEntitlementValue:(id)arg2 fromSecTask:(struct __SecTask { }*)arg3;
- (bool)hasRequiredEntitlements:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)isEntitledForInternalClient;
- (bool)isEntitledForMicrophone;
- (bool)isEntitledForStorefront;
- (void)setIsEntitledForStorefront:(bool)arg1;
- (bool)tccBoolValueOfEntitlement:(id)arg1 fromConnection:(id)arg2;

@end
