
@interface VCTransportStreamGFT : NSObject {
    id /* block */  _callback;
    void * _callbackContext;
    struct OpaqueCMBlockBuffer { } * _emptyBlockBuffer;
    struct tagVCMediaQueue { } * _mediaQueue;
    struct fd_set { 
        int fds_bits[32]; 
    }  _readFDsForCallback;
    unsigned int  _transportSessionID;
    int  _vtpCallbackId;
    int  _vtpCancelSocket;
    int  _vtpReceiveSocket;
}

@property (nonatomic) struct tagVCMediaQueue { }*mediaQueue;

- (int)VCTransportStreamSendPacket:(struct { unsigned char x1; double x2; unsigned char x3[1472]; int x4; int x5; struct tagVCIDSChannelDataFormat { unsigned short x_6_1_1[12]; unsigned char x_6_1_2; bool x_6_1_3; unsigned short x_6_1_4; unsigned char x_6_1_5; bool x_6_1_6; bool x_6_1_7; unsigned long long x_6_1_8; bool x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned short x_6_1_12; struct { unsigned short x_13_2_1; unsigned short x_13_2_2; unsigned short x_13_2_3; unsigned short x_13_2_4; unsigned short x_13_2_5; } x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; unsigned long long x_6_1_17; bool x_6_1_18; unsigned short x_6_1_19; bool x_6_1_20; bool x_6_1_21; bool x_6_1_22; bool x_6_1_23; } x6; }*)arg1;
- (void)VCTransportStreamUnblock;
- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 options:(id)arg2;
- (struct tagVCMediaQueue { }*)mediaQueue;
- (int)receivePacket:(struct { unsigned char x1; double x2; unsigned char x3[1472]; int x4; int x5; struct tagVCIDSChannelDataFormat { unsigned short x_6_1_1[12]; unsigned char x_6_1_2; bool x_6_1_3; unsigned short x_6_1_4; unsigned char x_6_1_5; bool x_6_1_6; bool x_6_1_7; unsigned long long x_6_1_8; bool x_6_1_9; bool x_6_1_10; bool x_6_1_11; unsigned short x_6_1_12; struct { unsigned short x_13_2_1; unsigned short x_13_2_2; unsigned short x_13_2_3; unsigned short x_13_2_4; unsigned short x_13_2_5; } x_6_1_13; bool x_6_1_14; bool x_6_1_15; bool x_6_1_16; unsigned long long x_6_1_17; bool x_6_1_18; unsigned short x_6_1_19; bool x_6_1_20; bool x_6_1_21; bool x_6_1_22; bool x_6_1_23; } x6; }*)arg1;
- (int)registerPacketCallbackContext:(void*)arg1 callback:(id /* block */)arg2;
- (void)setMediaQueue:(struct tagVCMediaQueue { }*)arg1;
- (int)unregisterPacketCallback;

@end
