
@protocol VCControlChannelTransactionDelegate <NSObject>

@required

- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
- (bool)isEncryptionEnabled;
- (bool)isParticipantActive:(unsigned long long)arg1;
- (NSData *)lastUsedMKIBytes;
- (unsigned long long)nextTransactionID;
- (int)protocolVersionforParticipantID:(NSNumber *)arg1;
- (void)reportSignificantHandshakeDelaySymptomForParticipantID:(NSNumber *)arg1;
- (void)scheduleAfter:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 6: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
