
@interface HMDDataStreamMessageCoder : NSObject

+ (id)_buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id*)arg3;
+ (bool)_decodeOPACKFrame:(id)arg1 receivedHeader:(id*)arg2 receivedPayload:(id*)arg3 error:(id*)arg4;
+ (bool)_decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5;
+ (id)_encodeOPACKHeader:(id)arg1 payload:(id)arg2 error:(id*)arg3;
+ (id)_encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4;
+ (bool)_unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id*)arg2 receivedPayload:(id*)arg3 error:(id*)arg4;
+ (id)buildUnencryptedOPACKHeader:(id)arg1 payload:(id)arg2 error:(id*)arg3;
+ (bool)decryptEncryptedOPACKFrame:(id)arg1 sessionEncryption:(id)arg2 receivedHeader:(id*)arg3 receivedPayload:(id*)arg4 error:(id*)arg5;
+ (id)encryptEncryptedOPACKHeader:(id)arg1 payload:(id)arg2 sessionEncryption:(id)arg3 error:(id*)arg4;
+ (id)eventHeaderForProtocol:(id)arg1 topic:(id)arg2;
+ (bool)readHeaderFromPartialData:(id)arg1 frameType:(unsigned char*)arg2 payloadLength:(unsigned long long*)arg3;
+ (bool)readHeaderFromPartialData:(const char *)arg1 length:(unsigned long long)arg2 frameType:(unsigned char*)arg3 payloadLength:(unsigned long long*)arg4;
+ (id)requestHeaderForProtocol:(id)arg1 topic:(id)arg2 identifier:(id)arg3;
+ (id)responseHeaderForRequestHeader:(id)arg1 status:(unsigned short)arg2;
+ (bool)unpackUnencryptedOPACKFrame:(id)arg1 receivedHeader:(id*)arg2 receivedPayload:(id*)arg3 error:(id*)arg4;

@end
