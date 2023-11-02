
@protocol ContinuityCaptureTransportDeviceStream <CMContinuityCaptureTransportMessaging>

@required

- (NSData *)cipherKeyforSessionID:(NSUUID *)arg1;
- (long long)entity;
- (NSString *)streamIdentifier;
- (NSUUID *)streamUUID;

@end
