
@interface DMFSendEventRequest : DMFTaskRequest {
    NSDictionary * _details;
    NSString * _eventType;
    NSString * _inReplyTo;
    NSString * _organizationIdentifier;
}

@property (nonatomic, copy) NSDictionary *details;
@property (nonatomic, copy) NSString *eventType;
@property (nonatomic, copy) NSString *inReplyTo;
@property (nonatomic, copy) NSString *organizationIdentifier;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)details;
- (void)encodeWithCoder:(id)arg1;
- (id)eventType;
- (id)inReplyTo;
- (id)initWithCoder:(id)arg1;
- (id)organizationIdentifier;
- (void)setDetails:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setInReplyTo:(id)arg1;
- (void)setOrganizationIdentifier:(id)arg1;

@end
