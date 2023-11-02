
@interface ACMBaseAuthenticationRequestImpl : ACMMessage <ACMBaseAuthenticationRequest>

@property (nonatomic, retain) NSNumber *appID;
@property (nonatomic, retain) NSString *appIDKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *realm;
@property (nonatomic, retain) NSNumber *serverResponseTimeout;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *userName;

@end
