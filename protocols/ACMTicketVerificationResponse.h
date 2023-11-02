
@protocol ACMTicketVerificationResponse <NSObject>

@required

- (NSError *)error;
- (NSNumber *)personDSID;
- (NSDictionary *)rawResponseData;
- (void)setError:(NSError *)arg1;
- (void)setRawResponseData:(NSDictionary *)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
