
@protocol ACMAuthenticationResponse <NSObject>

@required

- (NSError *)error;
- (NSDictionary *)rawResponseData;
- (void)setError:(NSError *)arg1;
- (void)setRawResponseData:(NSDictionary *)arg1;
- (void)setToken:(NSString *)arg1;
- (void)setUserName:(NSString *)arg1;
- (NSString *)token;
- (NSString *)userName;

@optional

- (bool)generatedWithTouchID;
- (void)setGeneratedWithTouchID:(bool)arg1;

@end
