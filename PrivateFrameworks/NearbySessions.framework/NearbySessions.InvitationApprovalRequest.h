
@interface NearbySessions.InvitationApprovalRequest : NSObject <NSCoding, NSSecureCoding> {
    void displayName;
    void remoteInvitationData;
    void userInfo;
}

@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
