
@interface ACMTicketVerificationResponseImpl : ACMAuthenticationResponseImpl <ACMTicketVerificationResponse>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly, retain) NSNumber *personDSID;
@property (retain) NSDictionary *rawResponseData;
@property (readonly) Class superclass;
@property (retain) id userInfo;

- (id)personDSID;

@end
