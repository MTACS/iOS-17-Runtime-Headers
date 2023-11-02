
@protocol REMPersonIDProviding

@required

- (NSString *)personID;
- (NSData *)personIDSalt;
- (void)setPersonID:(NSString *)arg1;
- (void)setPersonIDSalt:(NSData *)arg1;

@end
