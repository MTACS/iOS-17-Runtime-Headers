
@interface CKDSharePCSData : CKDPCSData <NSCopying, NSSecureCoding> {
    struct _OpaquePCSShareProtection { } * _myParticipantPCS;
    NSData * _myParticipantPCSData;
    long long  _myParticipantPermission;
    long long  _myParticipantRole;
    struct _OpaquePCSShareProtection { } * _preKeyRollInvitedPCS;
    struct _OpaquePCSShareProtection { } * _publicPCS;
    NSData * _publicPCSData;
    NSString * _publicPCSEtag;
    long long  _publicPermission;
    unsigned long long  _serviceType;
    NSString * _shareEtag;
    CKRecordID * _shareID;
    NSDate * _shareModificationDate;
}

@property (nonatomic) struct _OpaquePCSShareProtection { }*invitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection { }*myParticipantPCS;
@property (nonatomic, copy) NSData *myParticipantPCSData;
@property (nonatomic) long long myParticipantPermission;
@property (nonatomic) long long myParticipantRole;
@property (nonatomic) struct _OpaquePCSShareProtection { }*preKeyRollInvitedPCS;
@property (nonatomic) struct _OpaquePCSShareProtection { }*publicPCS;
@property (nonatomic, copy) NSData *publicPCSData;
@property (nonatomic, copy) NSString *publicPCSEtag;
@property (nonatomic) long long publicPermission;
@property (nonatomic) unsigned long long serviceType;
@property (nonatomic, retain) NSString *shareEtag;
@property (nonatomic, retain) CKRecordID *shareID;
@property (nonatomic, retain) NSDate *shareModificationDate;

+ (id)dataWithShare:(id)arg1 serviceType:(unsigned long long)arg2;
+ (id)dataWithShareID:(id)arg1 pcsData:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShareID:(id)arg1 pcsData:(id)arg2;
- (struct _OpaquePCSShareProtection { }*)invitedPCS;
- (id)itemID;
- (struct _OpaquePCSShareProtection { }*)myParticipantPCS;
- (id)myParticipantPCSData;
- (long long)myParticipantPermission;
- (long long)myParticipantRole;
- (struct _OpaquePCSShareProtection { }*)preKeyRollInvitedPCS;
- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (id)publicPCSData;
- (id)publicPCSEtag;
- (long long)publicPermission;
- (unsigned long long)serviceType;
- (void)setInvitedPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setMyParticipantPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setMyParticipantPCSData:(id)arg1;
- (void)setMyParticipantPermission:(long long)arg1;
- (void)setMyParticipantRole:(long long)arg1;
- (void)setPreKeyRollInvitedPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setPublicPCSData:(id)arg1;
- (void)setPublicPCSEtag:(id)arg1;
- (void)setPublicPermission:(long long)arg1;
- (void)setServiceType:(unsigned long long)arg1;
- (void)setShareEtag:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setShareModificationDate:(id)arg1;
- (id)shareEtag;
- (id)shareID;
- (id)shareModificationDate;

@end
