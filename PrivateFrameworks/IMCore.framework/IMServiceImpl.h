
@interface IMServiceImpl : IMService {
    unsigned int  _IDSensitivity;
    NSArray * _abProperties;
    NSArray * _addressBookProperties;
    NSString * _addressBookProperty;
    bool  _allowsMultipleConnections;
    IMAccount * _bestAccount;
    unsigned long long  _caseInsensitivityByHandleType;
    NSString * _countryCode;
    NSDictionary * _defaultAccountSettings;
    NSDictionary * _defaultSettings;
    NSArray * _emailDomains;
    bool  _groupsMergeDisplayNames;
    bool  _handleIDInsensitivityIsCarrierBased;
    bool  _handlesChatInvites;
    bool  _hasLoadedServiceProperties;
    bool  _ignoresNetworkConnectivity;
    NSData * _imageData;
    bool  _isPersistent;
    bool  _isPlugInService;
    NSString * _localizedName;
    NSString * _localizedShortName;
    NSString * _name;
    unsigned int  _screenNameSensitivity;
    NSDictionary * _serviceDefaults;
    NSDictionary * _serviceProps;
    NSString * _shortName;
    bool  _shouldDisableDeactivation;
    bool  _shouldInternationalizeNumbers;
    NSArray * _siblingServiceNames;
    bool  _supportsAdding;
    bool  _supportsAudioMessages;
    bool  _supportsAuthorization;
    bool  _supportsDatabaseStorage;
    bool  _supportsGroupAttachments;
    bool  _supportsIDStatusLookup;
    bool  _supportsMutatingGroupMembers;
    bool  _supportsOfflineTransfers;
    bool  _supportsOneSessionForAllAccounts;
    bool  _supportsPhoneNumberMapping;
    bool  _supportsPresence;
    bool  _supportsRegistration;
    bool  _supportsSMS;
}

@property (nonatomic, readonly) unsigned int IDSensitivity;
@property (nonatomic, readonly) bool _wantsInternationizedNumbers;
@property (nonatomic, retain) NSArray *abProperties;
@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly) NSArray *accountIDs;
@property (nonatomic, readonly) NSArray *addressBookProperties;
@property (nonatomic, readonly) NSString *addressBookProperty;
@property (nonatomic) bool allowsMultipleConnections;
@property (nonatomic, retain) IMAccount *bestAccount;
@property (nonatomic, readonly) long long buddyNotesMaxByteLength;
@property (nonatomic) unsigned long long caseInsensitivityByHandleType;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSDictionary *defaultAccountSettings;
@property (nonatomic, retain) NSDictionary *defaultSettings;
@property (getter=isDiscontinued, nonatomic, readonly) bool discontinued;
@property (nonatomic, retain) NSArray *emailDomains;
@property (nonatomic, readonly) bool groupsMergeDisplayNames;
@property (nonatomic) bool handleIDInsensitivityIsCarrierBased;
@property (nonatomic, readonly) bool handlesChatInvites;
@property (nonatomic) bool hasLoadedServiceProperties;
@property (nonatomic) bool ignoresNetworkConnectivity;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic) bool isPersistent;
@property (nonatomic) bool isPlugInService;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *localizedShortName;
@property (nonatomic, readonly) long long maxAttachmentSize;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int screenNameSensitivity;
@property (nonatomic, retain) NSDictionary *serviceDefaults;
@property (nonatomic, readonly) NSData *serviceImageData;
@property (nonatomic, retain) NSDictionary *serviceProperties;
@property (nonatomic, retain) NSDictionary *serviceProps;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic) bool shouldDisableDeactivation;
@property (nonatomic) bool shouldInternationalizeNumbers;
@property (nonatomic, retain) NSArray *siblingServiceNames;
@property (nonatomic, readonly) NSArray *siblingServices;
@property (nonatomic) bool supportsAdding;
@property (nonatomic) bool supportsAudioMessages;
@property (nonatomic) bool supportsAuthorization;
@property (nonatomic, readonly) bool supportsDatabaseStorage;
@property (nonatomic) bool supportsGroupAttachments;
@property (nonatomic) bool supportsIDStatusLookup;
@property (nonatomic) bool supportsMutatingGroupMembers;
@property (nonatomic) bool supportsOfflineTransfers;
@property (nonatomic) bool supportsOneSessionForAllAccounts;
@property (nonatomic) bool supportsPhoneNumberMapping;
@property (nonatomic) bool supportsPresence;
@property (nonatomic) bool supportsRegistration;
@property (nonatomic) bool supportsSMS;

+ (bool)_deviceIsAltAccount;
+ (bool)_iMessageEnabledForMultipleSubscriptionsForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (bool)_isLastAddressedHandleSubscriptionActive:(id)arg1;
+ (bool)_isSIMIdIDSRegisteredSIM:(id)arg1;
+ (bool)_isiMessageEnabledIfLastAddressedHandleIsNotActiveAnymore:(id)arg1;
+ (id)_phoneNumberOnSubscriptionWithSIMID:(id)arg1;
+ (bool)_readMMSUserOverride;
+ (bool)_shouldCheckIfLastAddressedHandleIsInSubscriptionsAnymoreButiMessageIsEnabledForAlias:(id)arg1 previousService:(id)arg2;
+ (id)activeServices;
+ (id)allServices;
+ (id)allServicesNonBlocking;
+ (id)connectedServices;
+ (id)connectedServicesWithCapability:(unsigned long long)arg1;
+ (bool)hasAlias:(id)arg1 onAccountForService:(id)arg2;
+ (bool)iMessageEnabled;
+ (bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2;
+ (bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1 simID:(id)arg2 previousService:(id)arg3;
+ (bool)mmsEnabled;
+ (bool)mmsEnabledforPhoneNumber:(id)arg1 simID:(id)arg2;
+ (id)operationalServicesWithCapability:(unsigned long long)arg1;
+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)servicesWithCapability:(unsigned long long)arg1;
+ (void)setServiceClass:(Class)arg1;
+ (bool)smsEnabled;
+ (id)supportedCountryCodes;
+ (bool)systemSupportsSMSSending;
+ (bool)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2;

- (void).cxx_destruct;
- (unsigned int)IDSensitivity;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_loadPropertiesIfNeeded;
- (bool)_supportsDatabaseStorage;
- (void)_syncWithRemoteBuddies;
- (bool)_wantsInternationizedNumbers;
- (id)abProperties;
- (Class)accountClass;
- (id)accountIDs;
- (void)activeAccountsChanged:(id)arg1;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (bool)allowsMultipleConnections;
- (id)bestAccount;
- (long long)buddyNotesMaxByteLength;
- (id)canonicalFormOfID:(id)arg1;
- (unsigned long long)caseInsensitivityByHandleType;
- (long long)compareNames:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)defaultAccountSettings;
- (id)defaultSettings;
- (void)defaultsChanged:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)doneSetup;
- (id)emailDomains;
- (bool)equalID:(id)arg1 andID:(id)arg2;
- (bool)groupsMergeDisplayNames;
- (bool)handleIDInsensitivityIsCarrierBased;
- (bool)handlesChatInvites;
- (bool)hasLoadedServiceProperties;
- (bool)ignoresNetworkConnectivity;
- (id)imageData;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)initialSyncPerformed;
- (id)internalName;
- (bool)isDiscontinued;
- (bool)isEnabled;
- (bool)isPersistent;
- (bool)isPlugInService;
- (id)localizedName;
- (id)localizedShortName;
- (long long)maxAttachmentSize;
- (long long)maxChatParticipantsForHandle:(id)arg1 simID:(id)arg2;
- (id)myScreenNames;
- (id)name;
- (id)normalizedFormOfID:(id)arg1;
- (unsigned int)screenNameSensitivity;
- (id)serviceDefaults;
- (id)serviceImageData;
- (id)serviceProperties;
- (id)serviceProps;
- (void)setAbProperties:(id)arg1;
- (void)setAllowsMultipleConnections:(bool)arg1;
- (void)setBestAccount:(id)arg1;
- (void)setCaseInsensitivityByHandleType:(unsigned long long)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDefaultAccountSettings:(id)arg1;
- (void)setDefaultSettings:(id)arg1;
- (void)setEmailDomains:(id)arg1;
- (void)setHandleIDInsensitivityIsCarrierBased:(bool)arg1;
- (void)setHasLoadedServiceProperties:(bool)arg1;
- (void)setIgnoresNetworkConnectivity:(bool)arg1;
- (void)setImageData:(id)arg1;
- (void)setIsPersistent:(bool)arg1;
- (void)setIsPlugInService:(bool)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setLocalizedShortName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setScreenNameSensitivity:(unsigned int)arg1;
- (void)setServiceDefaults:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (void)setServiceProps:(id)arg1;
- (void)setShouldDisableDeactivation:(bool)arg1;
- (void)setShouldInternationalizeNumbers:(bool)arg1;
- (void)setSiblingServiceNames:(id)arg1;
- (void)setSupportsAdding:(bool)arg1;
- (void)setSupportsAudioMessages:(bool)arg1;
- (void)setSupportsAuthorization:(bool)arg1;
- (void)setSupportsGroupAttachments:(bool)arg1;
- (void)setSupportsIDStatusLookup:(bool)arg1;
- (void)setSupportsMutatingGroupMembers:(bool)arg1;
- (void)setSupportsOfflineTransfers:(bool)arg1;
- (void)setSupportsOneSessionForAllAccounts:(bool)arg1;
- (void)setSupportsPhoneNumberMapping:(bool)arg1;
- (void)setSupportsPresence:(bool)arg1;
- (void)setSupportsRegistration:(bool)arg1;
- (void)setSupportsSMS:(bool)arg1;
- (id)shortName;
- (bool)shouldDisableDeactivation;
- (bool)shouldInternationalizeNumbers;
- (id)siblingServiceNames;
- (id)siblingServices;
- (unsigned long long)status;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (id)subtypeInformationForAccount:(id)arg1;
- (bool)supportsAdding;
- (bool)supportsAudioMessages;
- (bool)supportsAuthorization;
- (bool)supportsDatabaseStorage;
- (bool)supportsGroupAttachments;
- (bool)supportsIDStatusLookup;
- (bool)supportsMutatingGroupMembers;
- (bool)supportsOfflineTransfers;
- (bool)supportsOneSessionForAllAccounts;
- (bool)supportsPhoneNumberMapping;
- (bool)supportsPresence;
- (bool)supportsRegistration;
- (bool)supportsSMS;

@end
