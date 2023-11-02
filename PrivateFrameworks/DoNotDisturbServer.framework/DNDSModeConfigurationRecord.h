
@interface DNDSModeConfigurationRecord : NSObject <DNDSPartitionedBackingStoreRecord, NSCopying, NSMutableCopying> {
    bool  _automaticallyGenerated;
    long long  _compatibilityVersion;
    DNDSConfigurationRecord * _configuration;
    NSDate * _created;
    unsigned long long  _dimsLockScreen;
    long long  _ephemeralResolvedCompatibilityVersion;
    bool  _hasSecureData;
    unsigned long long  _impactsAvailability;
    NSDate * _lastModified;
    NSString * _lastModifiedByDeviceID;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _lastModifiedByVersion;
    DNDSModeRecord * _mode;
    DNDSConfigurationSecureRecord * _secureConfiguration;
    DNDSModeConfigurationTriggersRecord * _triggers;
}

@property (getter=isAutomaticallyGenerated, nonatomic, readonly) bool automaticallyGenerated;
@property (nonatomic, readonly) long long compatibilityVersion;
@property (nonatomic, readonly, copy) DNDSConfigurationRecord *configuration;
@property (nonatomic, readonly, copy) NSDate *created;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long dimsLockScreen;
@property (nonatomic, readonly) long long ephemeralResolvedCompatibilityVersion;
@property (nonatomic, readonly) bool hasSecureData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long impactsAvailability;
@property (nonatomic, readonly, copy) NSDate *lastModified;
@property (nonatomic, readonly, copy) NSString *lastModifiedByDeviceID;
@property (nonatomic, readonly) struct { long long x1; long long x2; long long x3; } lastModifiedByVersion;
@property (nonatomic, readonly, copy) DNDSModeRecord *mode;
@property (nonatomic, readonly, copy) DNDSConfigurationSecureRecord *secureConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) DNDSModeConfigurationTriggersRecord *triggers;
@property (nonatomic, readonly) bool wasLastModifiedByThisDevice;

+ (id)dictionaryRepresentationWithCKRecord:(id)arg1 partitionType:(unsigned long long)arg2;
+ (id)newWithCKRecord:(id)arg1;
+ (id)newWithCKRecord:(id)arg1 currentRecord:(id)arg2;
+ (id)newWithDNDSIDSRecord:(id)arg1;
+ (id)newWithDNDSIDSRecord:(id)arg1 currentRecord:(id)arg2;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)newWithDictionaryRepresentation:(id)arg1 partitionedDictionaryRepresentation:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithMode:(id)arg1 configuration:(id)arg2 secureConfiguration:(id)arg3 triggers:(id)arg4 impactsAvailability:(unsigned long long)arg5 dimsLockScreen:(unsigned long long)arg6 created:(id)arg7 lastModified:(id)arg8 lastModifiedByVersion:(struct { long long x1; long long x2; long long x3; })arg9 lastModifiedByDeviceID:(id)arg10 automaticallyGenerated:(bool)arg11 compatibilityVersion:(long long)arg12 ephemeralResolvedCompatibilityVersion:(long long)arg13 hasSecureData:(bool)arg14;
- (id)_initWithRecord:(id)arg1;
- (long long)compatibilityVersion;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)created;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)dimsLockScreen;
- (long long)ephemeralResolvedCompatibilityVersion;
- (bool)hasSecureData;
- (unsigned long long)hash;
- (unsigned long long)impactsAvailability;
- (id)init;
- (bool)isAutomaticallyGenerated;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)lastModifiedByDeviceID;
- (struct { long long x1; long long x2; long long x3; })lastModifiedByVersion;
- (void)log:(id)arg1 withMessage:(id)arg2;
- (id)mode;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)populateCKRecord:(inout id)arg1 lastChanceRecord:(id)arg2;
- (bool)populateDNDSIDSRecord:(inout id)arg1;
- (id)secureConfiguration;
- (id)shortDescription;
- (id)triggers;
- (bool)wasLastModifiedByThisDevice;

@end
