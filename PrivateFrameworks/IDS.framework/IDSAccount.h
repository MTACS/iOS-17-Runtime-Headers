
@interface IDSAccount : NSObject {
    _IDSAccount * _internal;
    NSString * _loginID;
}

@property (nonatomic, readonly, retain) _IDSAccount *_internal;
@property (setter=_setIsEnabled:, nonatomic) bool _isEnabled;
@property (nonatomic, readonly) NSString *_msp_validityDescription;
@property (nonatomic, retain) NSDictionary *accountInfo;
@property (nonatomic, readonly) NSArray *accountRegisteredURIs;
@property (nonatomic, readonly) int accountType;
@property (nonatomic, readonly) NSArray *aliasStrings;
@property (nonatomic, readonly) NSArray *aliases;
@property (nonatomic, readonly) NSArray *aliasesToRegister;
@property (nonatomic, readonly) bool canSend;
@property (nonatomic, readonly) NSArray *connectedDevices;
@property (nonatomic, readonly) NSDate *dateRegistered;
@property (nonatomic, readonly) NSArray *devices;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, readonly) NSArray *handles;
@property (readonly, copy) NSArray *hmd_handles;
@property (nonatomic, readonly) NSArray *im_registeredURIs;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isUsableForOuterMessaging;
@property (nonatomic, readonly) bool isUserDisabled;
@property (nonatomic, retain) NSString *loginID;
@property (nonatomic, readonly) NSArray *nearbyDevices;
@property (nonatomic, readonly) NSDate *nextRegistrationDate;
@property (nonatomic, readonly) NSString *primaryServiceName;
@property (nonatomic, readonly) NSString *profileID;
@property (nonatomic, readonly) NSDictionary *profileInfo;
@property (nonatomic, readonly) int profileValidationErrorReason;
@property (nonatomic, readonly) long long profileValidationStatus;
@property (nonatomic, readonly) NSDictionary *pseudonymURIMap;
@property (nonatomic, readonly) NSArray *pseudonyms;
@property (nonatomic, readonly) NSData *pushToken;
@property (nonatomic, retain) NSString *regionBasePhoneNumber;
@property (nonatomic, retain) NSString *regionID;
@property (nonatomic, readonly) NSDictionary *regionServerContext;
@property (nonatomic, readonly) NSArray *registeredURIs;
@property (nonatomic, readonly) NSDictionary *registrationAlertInfo;
@property (nonatomic, readonly) NSData *registrationCertificate;
@property (nonatomic, readonly) int registrationError;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *userUniqueIdentifier;
@property (nonatomic, readonly) NSArray *vettedAliases;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

- (void).cxx_destruct;
- (void)_callNearbyDevicesChanged;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)_internal;
- (bool)_isEnabled;
- (void)_reloadCachedDevices;
- (void)_reregisterAndReidentify:(bool)arg1;
- (void)_setIsEnabled:(bool)arg1;
- (id)accountInfo;
- (id)accountRegisteredURIs;
- (int)accountType;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (id)aliasStrings;
- (id)aliases;
- (id)aliasesToRegister;
- (void)authenticateAccount;
- (bool)canSend;
- (id)connectedDevices;
- (id)dateRegistered;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)description;
- (id)devices;
- (id)displayName;
- (void)forceRemoveAccount;
- (id)handles;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (bool)isActive;
- (bool)isEnabled;
- (bool)isUsableForOuterMessaging;
- (bool)isUserDisabled;
- (id)loginID;
- (id)matchingSim;
- (id)nearbyDevices;
- (id)nextRegistrationDate;
- (void)passwordUpdated;
- (id)primaryServiceName;
- (id)profileID;
- (id)profileInfo;
- (int)profileValidationErrorReason;
- (long long)profileValidationStatus;
- (id)pseudonymURIMap;
- (id)pseudonyms;
- (id)pushToken;
- (id)regionBasePhoneNumber;
- (id)regionID;
- (id)regionServerContext;
- (void)registerAccount;
- (id)registeredURIs;
- (id)registrationAlertInfo;
- (id)registrationCertificate;
- (int)registrationError;
- (int)registrationStatus;
- (void)removeAliases:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (id)serviceName;
- (void)setAccountInfo:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setLoginID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setRegionBasePhoneNumber:(id)arg1;
- (void)setRegionID:(id)arg1;
- (id)uniqueID;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (id)userUniqueIdentifier;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;
- (id)vettedAliases;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)hmd_handles;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)hmd_handles;

// Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore

- (id)im_registeredURIs;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)_msp_validityDescription;

@end
