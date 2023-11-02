
@interface CKRecordZone : NSObject <CKContainerAssignment, CKPropertiesDescription, CKRoughlyEquivalent, NSCopying, NSSecureCoding> {
    long long  _assetQuotaUsage;
    unsigned long long  _capabilities;
    NSData * _clientChangeToken;
    CKContainerID * _containerID;
    CKServerChangeToken * _currentServerChangeToken;
    int  _deviceCount;
    NSDate * _expirationDate;
    bool  _expired;
    bool  _hasUpdatedExpirationTimeInterval;
    NSArray * _invitedKeysToRemove;
    long long  _metadataQuotaUsage;
    bool  _needsZoneishPCSRolled;
    NSData * _pcsKeyID;
    NSString * _previousProtectionEtag;
    NSData * _protectionData;
    NSString * _protectionEtag;
    bool  _serializeProtectionData;
    CKReference * _share;
    NSNumber * _updatedExpirationTimeInterval;
    CKRecordZoneID * _zoneID;
    bool  _zoneKeyRollAllowed;
    NSString * _zonePCSLastModifierDevice;
    NSDate * _zonePCSModificationDate;
    NSData * _zoneishKeyID;
    NSData * _zoneishProtectionData;
}

@property long long assetQuotaUsage;
@property unsigned long long capabilities;
@property (copy) NSData *clientChangeToken;
@property (copy) CKServerChangeToken *currentServerChangeToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int deviceCount;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (copy) NSDate *expirationDate;
@property (getter=isExpired) bool expired;
@property bool hasUpdatedExpirationTimeInterval;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *invitedKeysToRemove;
@property long long metadataQuotaUsage;
@property bool needsZoneishPCSRolled;
@property (copy) NSData *pcsKeyID;
@property (copy) NSString *previousProtectionEtag;
@property (copy) NSData *protectionData;
@property (copy) NSString *protectionEtag;
@property bool serializeProtectionData;
@property (copy) CKReference *share;
@property (readonly) Class superclass;
@property (copy) NSNumber *updatedExpirationTimeInterval;
@property (copy) CKRecordZoneID *zoneID;
@property bool zoneKeyRollAllowed;
@property struct _OpaquePCSShareProtection { }*zonePCS;
@property (copy) NSString *zonePCSLastModifierDevice;
@property (copy) NSDate *zonePCSModificationDate;
@property (copy) NSData *zoneishKeyID;
@property struct _OpaquePCSShareProtection { }*zoneishPCS;
@property (copy) NSData *zoneishProtectionData;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)defaultRecordZone;
+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)systemRecordZone;

- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (long long)assetQuotaUsage;
- (unsigned long long)capabilities;
- (id)clientChangeToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentServerChangeToken;
- (id)description;
- (int)deviceCount;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (id)expirationDate;
- (bool)hasUpdatedExpirationTimeInterval;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;
- (id)invitedKeysToRemove;
- (bool)isExpired;
- (long long)metadataQuotaUsage;
- (bool)needsZoneishPCSRolled;
- (id)pcsKeyID;
- (id)previousProtectionEtag;
- (id)protectionData;
- (id)protectionEtag;
- (id)redactedDescription;
- (void)replaceZoneIDWith:(id)arg1;
- (bool)serializeProtectionData;
- (void)setAssetQuotaUsage:(long long)arg1;
- (void)setCapabilities:(unsigned long long)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setCurrentServerChangeToken:(id)arg1;
- (void)setDeviceCount:(int)arg1;
- (void)setExpirationAfterTimeInterval:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExpired:(bool)arg1;
- (void)setHasUpdatedExpirationTimeInterval:(bool)arg1;
- (void)setInvitedKeysToRemove:(id)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (void)setNeedsZoneishPCSRolled:(bool)arg1;
- (void)setPcsKeyID:(id)arg1;
- (void)setPreviousProtectionEtag:(id)arg1;
- (void)setProtectionData:(id)arg1;
- (void)setProtectionEtag:(id)arg1;
- (void)setSerializeProtectionData:(bool)arg1;
- (void)setShare:(id)arg1;
- (void)setUpdatedExpirationTimeInterval:(id)arg1;
- (void)setZoneID:(id)arg1;
- (void)setZoneKeyRollAllowed:(bool)arg1;
- (void)setZonePCSLastModifierDevice:(id)arg1;
- (void)setZonePCSModificationDate:(id)arg1;
- (void)setZoneishKeyID:(id)arg1;
- (void)setZoneishProtectionData:(id)arg1;
- (id)share;
- (id)updatedExpirationTimeInterval;
- (id)zoneID;
- (bool)zoneKeyRollAllowed;
- (id)zonePCSLastModifierDevice;
- (id)zonePCSModificationDate;
- (id)zoneishKeyID;
- (id)zoneishProtectionData;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (void)fillOutPCSMetadataInfo;
- (void)setZonePCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setZoneishPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (struct _OpaquePCSShareProtection { }*)zonePCS;
- (struct _OpaquePCSShareProtection { }*)zoneishPCS;

@end
