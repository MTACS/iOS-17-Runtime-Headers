
@interface SKPublishedStatus : NSObject <NSSecureCoding> {
    NSDate * _dateCreated;
    NSDate * _datePublished;
    NSDate * _dateReceived;
    SKInvitationPayload * _invitationPayload;
    SKStatusPayload * _statusPayload;
    NSString * _statusUniqueIdentifier;
}

@property (nonatomic, readonly) NSDate *dateCreated;
@property (nonatomic, readonly) NSDate *datePublished;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic, readonly) SKInvitationPayload *invitationPayload;
@property (nonatomic, readonly) SKStatusPayload *statusPayload;
@property (nonatomic, readonly) NSString *statusUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)datePublished;
- (id)dateReceived;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusPayload:(id)arg1 statusUniqueIdentifier:(id)arg2 datePublished:(id)arg3 dateCreated:(id)arg4 dateReceived:(id)arg5 invitationPayload:(id)arg6;
- (id)invitationPayload;
- (id)statusPayload;
- (id)statusUniqueIdentifier;

@end
