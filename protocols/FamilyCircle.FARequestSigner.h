
@protocol FamilyCircle.FARequestSigner

@required

- (ACAccount *)account;
- (NSDictionary *)accountInfoPayload;
- (void)signURLRequest:(NSMutableURLRequest *)arg1;

@end
