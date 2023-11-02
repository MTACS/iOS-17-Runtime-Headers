
@interface TUThumperCTCapabilitiesState : TUCTCapabilitiesState <NSCopying, NSSecureCoding, TUPubliclyAccessibleCopying> {
    NSString * _accountID;
    bool  _approved;
    NSSet * _approvedSecondaryDeviceIDs;
    bool  _associated;
    NSString * _localDeviceID;
    bool  _supportsDefaultPairedDevice;
}

@property (nonatomic, copy) NSString *accountID;
@property (getter=isApproved, nonatomic) bool approved;
@property (nonatomic, copy) NSSet *approvedSecondaryDeviceIDs;
@property (getter=isAssociated, nonatomic) bool associated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *localDeviceID;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsDefaultPairedDevice;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;

- (void).cxx_destruct;
- (id)accountID;
- (id)approvedSecondaryDeviceIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCapabilityInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isApproved;
- (bool)isAssociated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilitiesState:(id)arg1;
- (id)localDeviceID;
- (id)publiclyAccessibleCopy;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAccountID:(id)arg1;
- (void)setApproved:(bool)arg1;
- (void)setApprovedSecondaryDeviceIDs:(id)arg1;
- (void)setAssociated:(bool)arg1;
- (void)setLocalDeviceID:(id)arg1;
- (void)setSupportsDefaultPairedDevice:(bool)arg1;
- (bool)supportsDefaultPairedDevice;

@end
