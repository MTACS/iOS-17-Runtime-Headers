
@interface HMBShareInvitation : HMFObject <NSCopying, NSSecureCoding> {
    HMBCloudZoneID * _cloudZoneID;
    HMBShareInvitationContext * _context;
    NSDate * _dateCreated;
    NSURL * _shareURL;
    CKDeviceToDeviceShareInvitationToken * _token;
}

@property (nonatomic, readonly) HMBCloudZoneID *cloudZoneID;
@property (nonatomic, readonly) HMBShareInvitationContext *context;
@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSURL *shareURL;
@property (nonatomic, readonly) CKDeviceToDeviceShareInvitationToken *token;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)cloudZoneID;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateCreated;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4;
- (id)initWithURL:(id)arg1 token:(id)arg2 context:(id)arg3 cloudZoneID:(id)arg4 dateCreated:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)shareURL;
- (id)token;

@end
