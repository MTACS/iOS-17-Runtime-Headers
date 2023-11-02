
@protocol CipherML.CipherMLServiceProtocol

@required

- (void)cancelUpload;
- (void)uploadKeysWithEncodedUserIdentifier:(NSData *)arg1 keyConfigData:(NSArray *)arg2 delegate:(id <_TtP8CipherML23CipherMLServiceDelegate_>)arg3;

@end
