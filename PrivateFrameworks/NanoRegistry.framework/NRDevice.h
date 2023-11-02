
@interface NRDevice : NSObject <HKMedicationsCapabilityProviding, NSSecureCoding> {
    NSMutableDictionary * _changeBlocks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NRDevice * _me;
    NSMutableDictionary * _observers;
    NSMutableDictionary * _oldPropertiesForChangeNotifications;
    NSUUID * _pairingID;
    NSMutableArray * _promiscuousChangeBlocks;
    NSPointerArray * _promiscuousObservers;
    NSMutableDictionary * _properties;
    NRRegistry * _registry;
}

@property (nonatomic, readonly) NSUUID *pairingID;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forProperty:(id)arg2;
- (void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (bool)archived;
- (bool)canMigrate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(bool)arg4;
- (void)invalidate;
- (bool)migrationConfirmed;
- (id)migrationError;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)pairingID;
- (id)propertyNames;
- (void)registerForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (bool)supportsCapability:(id)arg1;
- (void)unregisterForPropertyChanges:(id)arg1 withBlock:(id /* block */)arg2;
- (id)valueForProperty:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

+ (bool)activePairedDeviceSupportIsGreaterEqualVersion:(unsigned long long)arg1;
+ (bool)activePairedDeviceSupportsAddBulletinReplyToken;
+ (bool)activePairedDeviceSupportsAttachmentFiles;
+ (bool)activePairedDeviceSupportsAuthorizationExpirationDate;
+ (bool)activePairedDeviceSupportsAuthorizationStatusLockScreenAndNCSettings;
+ (bool)activePairedDeviceSupportsCriticalAndGroupingSettings;
+ (bool)activePairedDeviceSupportsDisplayingSubtitle;
+ (bool)activePairedDeviceSupportsEmergencyAlerts;
+ (bool)activePairedDeviceSupportsFileBulletinAdd;
+ (bool)activePairedDeviceSupportsFileSettingSync;
+ (bool)activePairedDeviceSupportsIconsPerNotification;
+ (bool)activePairedDeviceSupportsMultipleAttachments;
+ (bool)activePairedDeviceSupportsNSNullPListExtenion;
+ (bool)activePairedDeviceSupportsNoLocalRemoteNotificationInBulletinContext;
+ (bool)activePairedDeviceSupportsNotSendingTemporarySequenceNumbers;
+ (bool)activePairedDeviceSupportsSendingOnlyCategoryID;
+ (bool)activePairedDeviceSupportsSiriActionAppList;
+ (bool)activePairedDeviceSupportsSpokenNotificationSettings;
+ (bool)activePairedDeviceSupportsUserNotificationListDestination;
+ (id)versionForString:(id)arg1;

- (unsigned long long)bltVersion;
- (unsigned long long)watchOSVersion;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

+ (id)activeDevice;

- (bool)hasHomeButton;
- (bool)isCellularSeries3;
- (bool)isRunningInternalBuild;
- (bool)isTinker;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

- (unsigned long long)_dnds_assertionSyncProtocolVersion;
- (unsigned long long)_dnds_configurationSyncProtocolVersion;
- (bool)_dnds_isIOS14EraOS;
- (unsigned long long)_dnds_minorBuildVersion;
- (struct { long long x1; long long x2; long long x3; })_dnds_operatingSystemVersion;
- (unsigned long long)_dnds_pairedDeviceClass;
- (bool)_dnds_supportsSilenceLists;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (bool)hd_isActive;
- (bool)hd_isAltAccount;
- (id)hd_lastActiveDate;
- (id)hd_lastInactiveDate;
- (id)hd_name;
- (id)hd_pairingID;
- (id)hd_productType;
- (id)hd_shortDescription;
- (id)hd_systemBuildVersion;

// Image: /System/Library/PrivateFrameworks/HealthMedications.framework/HealthMedications

- (bool)supportsMeadowCapability;
- (bool)supportsMedicationsCapability;

@end
