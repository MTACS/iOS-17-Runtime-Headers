
@interface AppStoreKitInternal.JSUserObject : NSObject <_TtP19AppStoreKitInternalP33_5DCB8B06D2403C176A36BAD97712985119JSUserObjectExports_> {
    void accounts;
    void fitnessAppInstallationAllowedConditionLock;
    void isFitnessAppInstallationAllowedBox;
    void onDevicePersonalizationDataManager;
}

@property (nonatomic, readonly) NSString *accountIdentifier;
@property (nonatomic, readonly) NSString *dsid;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) bool isFitnessAppInstallationAllowed;
@property (nonatomic, readonly) bool isManagedAppleID;
@property (nonatomic, readonly) bool isOnDevicePersonalizationEnabled;
@property (nonatomic, readonly) bool isUnderThirteen;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) NSNumber *userAgeIfAvailable;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)dsid;
- (id)firstName;
- (id)init;
- (bool)isFitnessAppInstallationAllowed;
- (bool)isManagedAppleID;
- (bool)isOnDevicePersonalizationEnabled;
- (bool)isUnderThirteen;
- (id)lastName;
- (id)onDevicePersonalizationDataContainerForAppIds:(id)arg1;
- (void)queryFitnessAppInstallationAllowed;
- (id)userAgeIfAvailable;

@end
