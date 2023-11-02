
@interface ACMAuthenticationResponseImpl : ACMMessage <ACMAuthenticationResponse>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property bool generatedWithTouchID;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *rawResponseData;
@property (readonly) Class superclass;
@property (retain) NSString *token;
@property (retain) NSString *userName;

+ (id)authenticationResponse;

@end
