
@interface ACMTicketVerificationRequestImpl : ACMMessage <ACMTicketVerificationRequest>

@property (retain) NSNumber *appID;
@property (retain) NSString *appIDKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *realm;
@property (retain) NSNumber *serverResponseTimeout;
@property (readonly) Class superclass;
@property (retain) NSString *token;
@property (retain) id userInfo;
@property (retain) NSString *userName;

@end
