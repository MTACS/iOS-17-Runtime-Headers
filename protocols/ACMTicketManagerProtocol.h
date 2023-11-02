
@protocol ACMTicketManagerProtocol <ACCTicketManagerProtocol>

@optional

- (ACMAuthContext *)initialTokenNotTiedToSessionWithRealm:(NSString *)arg1;
- (NSData *)sciFiSignatureForToken:(ACMAuthContext *)arg1;

@end
