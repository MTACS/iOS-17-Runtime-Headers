
@interface RWIProtocolSecurity : RWIProtocolJSONObject

@property (nonatomic, retain) RWIProtocolSecurityCertificate *certificate;
@property (nonatomic, retain) RWIProtocolSecurityConnection *connection;

- (id)certificate;
- (id)connection;
- (void)setCertificate:(id)arg1;
- (void)setConnection:(id)arg1;

@end
