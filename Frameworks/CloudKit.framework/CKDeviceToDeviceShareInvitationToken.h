
@interface CKDeviceToDeviceShareInvitationToken : NSObject <NSCopying, NSSecureCoding> {
    NSString * _participantID;
    NSURL * _shareURL;
    NSData * _sharingInvitationData;
}

@property (nonatomic, readonly, copy) NSString *participantID;
@property (nonatomic, readonly, copy) NSURL *shareURL;
@property (nonatomic, readonly, copy) NSData *sharingInvitationData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2;
- (id)initWithSharingInvitationData:(id)arg1 shareURL:(id)arg2 participantID:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)participantID;
- (id)shareURL;
- (id)sharingInvitationData;

@end
