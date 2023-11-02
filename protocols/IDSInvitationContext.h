
@protocol IDSInvitationContext <NSObject, NSSecureCoding>

@required

- (long long)contextType;
- (id)initWithPayload:(NSDictionary *)arg1;
- (NSDictionary *)payload;
- (NSString *)schemaIdentifier;

@end
