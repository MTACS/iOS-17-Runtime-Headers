
@interface AVCRTCPSenderReport : AVCRTCPPacket {
    unsigned int  _NTPLeastSignificantWord;
    unsigned int  _NTPMostSignificantWord;
    unsigned int  _RTPTimestamp;
    unsigned int  _octetsSent;
    unsigned int  _packetsSent;
    AVCRTCPReceiverReport * _receiverReport;
}

@property (nonatomic) unsigned int NTPLeastSignificantWord;
@property (nonatomic) unsigned int NTPMostSignificantWord;
@property (nonatomic) unsigned int RTPTimestamp;
@property (nonatomic) unsigned int octetsSent;
@property (nonatomic) unsigned int packetsSent;
@property (nonatomic, retain) AVCRTCPReceiverReport *receiverReport;

- (unsigned int)NTPLeastSignificantWord;
- (unsigned int)NTPMostSignificantWord;
- (unsigned int)RTPTimestamp;
- (void)dealloc;
- (id)description;
- (id)initWithRTCPPacket:(struct tagRTCPPACKET { struct tagRTCPCOMMON { unsigned int x_1_1_1 : 5; unsigned int x_1_1_2 : 1; unsigned int x_1_1_3 : 2; unsigned int x_1_1_4 : 8; unsigned short x_1_1_5; } x1; union { struct tagSR_RTCP { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; struct tagRTCP_RRB { unsigned int x_7_3_1; unsigned int x_7_3_2 : 8; unsigned int x_7_3_3 : 24; unsigned int x_7_3_4; unsigned int x_7_3_5; unsigned int x_7_3_6; unsigned int x_7_3_7; } x_1_2_7[1]; } x_2_1_1; struct tagRR_RTCP { unsigned int x_2_2_1; struct tagRTCP_RRB { unsigned int x_2_3_1; unsigned int x_2_3_2 : 8; unsigned int x_2_3_3 : 24; unsigned int x_2_3_4; unsigned int x_2_3_5; unsigned int x_2_3_6; unsigned int x_2_3_7; } x_2_2_2[1]; } x_2_1_2; struct tagSDES_RTCP { unsigned int x_3_2_1; struct tagRTCPSDES { unsigned char x_2_3_1; unsigned char x_2_3_2; BOOL x_2_3_3[258]; } x_3_2_2; } x_2_1_3; struct tagBYE_RTCP { unsigned int x_4_2_1; } x_2_1_4; struct tagRTCP_APP { unsigned int x_5_2_1; unsigned int x_5_2_2; } x_2_1_5; struct tagRTCP_APP_LTRP { struct tagRTCP_APP { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_6_2_1; unsigned int x_6_2_2; } x_2_1_6; } x2; }*)arg1;
- (unsigned int)octetsSent;
- (unsigned int)packetsSent;
- (id)receiverReport;
- (void)setNTPLeastSignificantWord:(unsigned int)arg1;
- (void)setNTPMostSignificantWord:(unsigned int)arg1;
- (void)setOctetsSent:(unsigned int)arg1;
- (void)setPacketsSent:(unsigned int)arg1;
- (void)setRTPTimestamp:(unsigned int)arg1;
- (void)setReceiverReport:(id)arg1;

@end