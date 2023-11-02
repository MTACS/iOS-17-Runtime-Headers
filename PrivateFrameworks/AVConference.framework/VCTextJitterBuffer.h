
@interface VCTextJitterBuffer : NSObject {
    struct tagVCTextJitterBufferConfiguration { 
        unsigned int sampleRate; 
        <VCTextFrameReceiver> *delegate; 
    }  _configuration;
    id  _delegate;
    bool  _firstFrameReceived;
    NSObject<OS_dispatch_source> * _heartbeat;
    struct JitterQueue_t { } * _jitterQueue;
    unsigned int  _lastSequenceNumber;
    struct JitterPreloadQueue_t { } * _preloadQueue;
    bool  _resetRequested;
}

- (struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; }*)allocTextFrame;
- (struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)allocTextPacket;
- (void)dealloc;
- (id)delegate;
- (void)enqueuePacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1;
- (void)heartbeat;
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration { unsigned int x1; id x2; }*)arg1;
- (void)jitterQueuePushPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1;
- (void)releaseTextFrame:(struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; }*)arg1;
- (void)releaseTextPacket:(struct tagAudioPacket { int x1; int x2; int x3; bool x4; unsigned short x5; unsigned int x6; int x7; int x8; double x9; int x10; unsigned char x11[1472]; int x12; unsigned char x13[256]; unsigned char x14; struct tagAudioFrame {} *x15[4]; int x16; double x17; int x18; struct tagDecoderSettings {} *x19; bool x20; unsigned int x21; unsigned char x22; unsigned short x23; }*)arg1;
- (void)setDelegate:(id)arg1;
- (bool)start;
- (bool)startHeartbeat;
- (void)stop;
- (void)stopHeartbeat;

@end
