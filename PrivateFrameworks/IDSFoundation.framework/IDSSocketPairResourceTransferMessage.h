
@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage

+ (id)cancelMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4;
+ (id)resumeMessageWithSequenceNumber:(unsigned int)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4;

- (unsigned long long)byteOffset;
- (unsigned char)cancelReason;
- (unsigned char)command;
- (unsigned char)type;

@end
