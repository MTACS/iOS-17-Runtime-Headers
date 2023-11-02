
@interface VCTextReceiver : NSObject <VCTextFrameReceiver> {
    <VCTextReceiverDelegate> * _delegate;
    VCTextJitterBuffer * _jitterBuffer;
    double  _lastReceivedRTCPPacketTime;
    double  _lastReceivedRTPPacketTime;
    struct tagVCRealTimeThread { unsigned int x1; unsigned int x2; struct _opaque_pthread_mutex_t { long long x_3_1_1; BOOL x_3_1_2[56]; } x3; id x4; int (*x5)(); void *x6; struct OpaqueFigThread {} *x7; int x8; BOOL x9[60]; unsigned int x10; unsigned int x11; } * _receiverThread;
    struct tagHANDLE { int x1; } * _rtpHandle;
    struct OpaqueVCTransportStreamRunLoop { } * _runLoop;
    unsigned int  _sampleRate;
    NSArray * _supportedPayloads;
}

@property (nonatomic) <VCTextReceiverDelegate> *delegate;
@property (nonatomic) double lastReceivedRTCPPacketTime;
@property (nonatomic) double lastReceivedRTPPacketTime;
@property (nonatomic, retain) NSArray *supportedPayloads;

- (struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; }*)allocFrameWithPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1 data:(char *)arg2 dataLength:(int)arg3 timestamp:(unsigned int)arg4;
- (void)dealloc;
- (id)delegate;
- (void)didDetectMissingFrame;
- (void)didReceiveFrame:(struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; }*)arg1;
- (bool)enqueuePacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1;
- (id)initWithConfiguration:(struct _VCTextReceiverConfiguration { struct tagHANDLE {} *x1; unsigned int x2; bool x3; }*)arg1;
- (void)initializeTextPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1 withMediaPacket:(struct _RTPMediaPacket { int x1; int x2; int x3; unsigned short x4; unsigned int x5; unsigned int x6; unsigned short x7; bool x8; double x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned short x14[12]; unsigned char x15; unsigned char x16; struct { int x_17_1_1; int x_17_1_2; bool x_17_1_3; unsigned long long x_17_1_4; } x17; unsigned long long x18; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_19_1_1; unsigned long long x_19_1_2; char *x_19_1_3; } x19; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_20_1_1; unsigned long long x_20_1_2; char *x_20_1_3; } x20; struct VCBlockBuffer_t { struct OpaqueCMBlockBuffer {} *x_21_1_1; unsigned long long x_21_1_2; char *x_21_1_3; } x21; bool x22; bool x23; bool x24; unsigned char x25; }*)arg2;
- (bool)isSupportedPayload:(int)arg1;
- (double)lastReceivedRTCPPacketTime;
- (double)lastReceivedRTPPacketTime;
- (bool)parsePacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1;
- (void)processRTCPPacket;
- (void)processRTPPacket;
- (void)receiverThreadCallback:(struct tagVCRealTimeThreadParameters { int x1; }*)arg1;
- (int)retrieveRTPPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastReceivedRTCPPacketTime:(double)arg1;
- (void)setLastReceivedRTPPacketTime:(double)arg1;
- (void)setSupportedPayloads:(id)arg1;
- (void)splitPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1 packetArray:(struct tagAudioPacketArray { struct tagAudioPacket {} *x1[100]; unsigned int x2; unsigned int x3; }*)arg2;
- (bool)start;
- (bool)stop;
- (id)supportedPayloads;
- (void)validateAndEnqueuePackets:(struct tagAudioPacketArray { struct tagAudioPacket {} *x1[100]; unsigned int x2; unsigned int x3; }*)arg1;

@end
