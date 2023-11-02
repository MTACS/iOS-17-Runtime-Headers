
@protocol AKFidoResponse

@required

- (NSString *)challenge;
- (NSString *)clientData;
- (NSString *)credentialID;
- (NSString *)relyingPartyIdentifier;
- (NSString *)userIdentifier;

@end
