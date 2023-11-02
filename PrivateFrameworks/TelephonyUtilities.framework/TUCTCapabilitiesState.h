
@interface TUCTCapabilitiesState : NSObject <NSCopying, TUPubliclyAccessibleCopying, TUSecureCoding> {
    bool  _currentlyAvailable;
    bool  _emergencyCurrentlyAvailable;
    bool  _emergencySupported;
    bool  _enabled;
    NSData * _provisioningPostData;
    int  _provisioningStatus;
    NSURL * _provisioningURL;
    bool  _provisioningURLInvalid;
    bool  _roamingEnabled;
    bool  _roamingSupported;
    bool  _supported;
}

@property (nonatomic, readonly, copy) TUCTCapabilityInfo *ctCapabilityInfo;
@property (getter=isCurrentlyAvailable, nonatomic) bool currentlyAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmergencyCurrentlyAvailable, nonatomic) bool emergencyCurrentlyAvailable;
@property (getter=isEmergencySupported, nonatomic) bool emergencySupported;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSData *provisioningPostData;
@property (nonatomic) int provisioningStatus;
@property (nonatomic, copy) NSURL *provisioningURL;
@property (getter=isProvisioningURLInvalid, nonatomic) bool provisioningURLInvalid;
@property (getter=isRoamingEnabled, nonatomic) bool roamingEnabled;
@property (getter=isRoamingSupported, nonatomic) bool roamingSupported;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic) bool supported;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)ctCapabilityInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCapabilityInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidateProvisioningURL;
- (bool)isCurrentlyAvailable;
- (bool)isEmergencyCurrentlyAvailable;
- (bool)isEmergencySupported;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilitiesState:(id)arg1;
- (bool)isProvisioningURLInvalid;
- (bool)isRoamingEnabled;
- (bool)isRoamingSupported;
- (bool)isSupported;
- (id)provisioningPostData;
- (int)provisioningStatus;
- (id)provisioningURL;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCurrentlyAvailable:(bool)arg1;
- (void)setEmergencyCurrentlyAvailable:(bool)arg1;
- (void)setEmergencySupported:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setProvisioningPostData:(id)arg1;
- (void)setProvisioningStatus:(int)arg1;
- (void)setProvisioningURL:(id)arg1;
- (void)setProvisioningURLInvalid:(bool)arg1;
- (void)setRoamingEnabled:(bool)arg1;
- (void)setRoamingSupported:(bool)arg1;
- (void)setSupported:(bool)arg1;

@end
