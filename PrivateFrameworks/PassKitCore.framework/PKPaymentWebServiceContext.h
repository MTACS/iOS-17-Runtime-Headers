
@interface PKPaymentWebServiceContext : PKWebServiceContext {
    NSDate * _archivedDate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    NSArray * _certificates;
    NSString * _companionSerialNumber;
    PKPaymentWebServiceConfiguration * _configuration;
    NSDate * _configurationDate;
    long long  _consistencyCheckBackoffLevel;
    bool  _devSigned;
    NSString * _deviceID;
    NSMutableDictionary * _featureSupportedLanguageCache;
    bool  _ignoreProvisioningEnablementPercentage;
    NSString * _lastUpdatedTag;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock_context;
    bool  _messageServiceDisabled;
    NSString * _nextPushToken;
    NSString * _primaryRegionIdentifier;
    NSString * _pushToken;
    NSDictionary * _regions;
    NSDate * _registrationDate;
    NSString * _secureElementID;
    bool  _transactionServiceDisabled;
    NSMutableDictionary * _verificationRequestsByPassUniqueID;
    long long  _version;
}

@property (copy) NSDate *archivedDate;
@property (copy) NSArray *certificates;
@property (copy) NSString *companionSerialNumber;
@property (retain) PKPaymentWebServiceConfiguration *configuration;
@property (copy) NSDate *configurationDate;
@property long long consistencyCheckBackoffLevel;
@property bool devSigned;
@property (copy) NSString *deviceID;
@property (nonatomic, readonly) bool hasPeerPaymentAccount;
@property bool ignoreProvisioningEnablementPercentage;
@property (copy) NSString *lastUpdatedTag;
@property bool messageServiceDisabled;
@property (copy) NSString *nextPushToken;
@property (nonatomic, readonly) NSURL *peerPaymentServiceURL;
@property (readonly) PKPaymentWebServiceRegion *primaryRegion;
@property (copy) NSString *primaryRegionIdentifier;
@property (copy) NSString *pushToken;
@property (copy) NSDictionary *regions;
@property (copy) NSDate *registrationDate;
@property (copy) NSString *secureElementID;
@property bool transactionServiceDisabled;
@property long long version;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (void)_migrateContext:(id)arg1;
+ (void)_migrateFrom0To1:(id)arg1;
+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TSMPushTopics;
- (id)TSMURLStringByPushTopic;
- (double)_contextProvisioningEnablementValue;
- (void)_localizationUpdated;
- (id)_regionWithPeerPaymentServiceURL;
- (id)accountServicePushTopics;
- (void)addVerificationRequestRecord:(id)arg1 forUniqueID:(id)arg2;
- (id)applyServiceFeaturesForRegionMeetingEnablementThreshold:(id)arg1;
- (id)applyServiceLocalizationBundleForFeatureIdentifier:(unsigned long long)arg1 mainLanguageBundle:(id)arg2;
- (id)applyServicePreferredLanguageForFeatureIdentifier:(unsigned long long)arg1 mainLanguageBundle:(id)arg2;
- (id)applyServicePushTopics;
- (void)archiveAtPath:(id)arg1;
- (id)archivedDate;
- (void)atomicallyUpdateEveryRegion:(id /* block */)arg1;
- (void)atomicallyUpdatePrimaryRegion:(id /* block */)arg1;
- (void)atomicallyUpdateRegionWithIdentifier:(id)arg1 updateBlock:(id /* block */)arg2;
- (id)betaPaymentNetworksForRegion:(id)arg1;
- (id)certificates;
- (id)companionSerialNumber;
- (id)configuration;
- (id)configurationDate;
- (long long)consistencyCheckBackoffLevel;
- (bool)contextMeetsDeviceUpgradeTasksEnablementThresholdForRegion:(id)arg1;
- (bool)contextMeetsMarketGeoNotificationThresholdForRegion:(id)arg1 paymentNetwork:(long long)arg2;
- (bool)contextMeetsProvisioningEnablementPercentageThresholdForRegion:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (bool)devSigned;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPeerPaymentAccount;
- (bool)ignoreProvisioningEnablementPercentage;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedTag;
- (bool)messageServiceDisabled;
- (id)nextPushToken;
- (id)notificationPushTopics;
- (id)peerPaymentServiceURL;
- (id)primaryRegion;
- (id)primaryRegionIdentifier;
- (id)pushToken;
- (id)regionForIdentifier:(id)arg1;
- (id)regions;
- (id)registrationDate;
- (void)removeVerificationRequestRecordForUniqueID:(id)arg1;
- (id)secureElementID;
- (void)setArchivedDate:(id)arg1;
- (void)setCertificates:(id)arg1;
- (void)setCompanionSerialNumber:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setConfigurationDate:(id)arg1;
- (void)setConsistencyCheckBackoffLevel:(long long)arg1;
- (void)setDevSigned:(bool)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setIgnoreProvisioningEnablementPercentage:(bool)arg1;
- (void)setLastUpdatedTag:(id)arg1;
- (void)setMessageServiceDisabled:(bool)arg1;
- (void)setNextPushToken:(id)arg1;
- (void)setPrimaryRegionIdentifier:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRegions:(id)arg1;
- (void)setRegistrationDate:(id)arg1;
- (void)setSecureElementID:(id)arg1;
- (void)setTransactionServiceDisabled:(bool)arg1;
- (void)setVersion:(long long)arg1;
- (bool)transactionServiceDisabled;
- (id)verificationRequestRecordForUniqueID:(id)arg1;
- (long long)version;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkPossiblyOverriddenPeerPaymentServiceURL;

@end
