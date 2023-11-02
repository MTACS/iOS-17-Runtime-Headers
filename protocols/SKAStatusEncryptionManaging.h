
@protocol SKAStatusEncryptionManaging <NSObject>

@required

- (SKADecryptedStatusPayload *)decryptStatusPayloadFromStatusEnvelopeData:(NSData *)arg1 channel:(SKADatabaseChannel *)arg2;
- (NSData *)encodeStatusPayload:(SKStatusPayload *)arg1 statusUniqueIdentifier:(NSString *)arg2 dateCreated:(NSDate *)arg3 currentServerTime:(NSDate *)arg4 channel:(SKADatabaseChannel *)arg5;
- (NSString *)encryptionValidationTokenForChannel:(SKADatabaseChannel *)arg1;
- (SKAStatusUnencryptedEnvelope *)extractEnvelopeFromStatusEnvelopeData:(NSData *)arg1;

@end
