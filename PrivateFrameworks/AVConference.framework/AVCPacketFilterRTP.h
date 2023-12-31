
@interface AVCPacketFilterRTP : AVCPacketFilter {
    unsigned int  _SSRC;
    unsigned char  _type;
}

@property (readonly) unsigned char type;

- (id)initWithIncomingSSRC:(unsigned int)arg1 acceptPacketType:(unsigned char)arg2;
- (bool)isMatchedPacket:(const void*)arg1 size:(int)arg2;
- (bool)isPayloadTypeMatched:(bool)arg1;
- (bool)isRTCPPayload:(unsigned short)arg1;
- (unsigned char)type;

@end
