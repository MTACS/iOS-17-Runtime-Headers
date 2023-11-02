
@interface CRKASMClassSessionInvitation : NSObject <CRKDictionaryCodable> {
    NSString * _instructorIdentifier;
    NSUUID * _invitationIdentifier;
    DMFControlSessionIdentifier * _sessionIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSString *instructorIdentifier;
@property (nonatomic, readonly) NSUUID *invitationIdentifier;
@property (nonatomic, readonly) DMFControlSessionIdentifier *sessionIdentifier;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithInvitationIdentifier:(id)arg1 instructorIdentifier:(id)arg2 sessionIdentifier:(id)arg3;
- (id)initWithSessionIdentifier:(id)arg1 instructorIdentifier:(id)arg2;
- (id)instructorIdentifier;
- (id)invitationIdentifier;
- (id)sessionIdentifier;

@end
