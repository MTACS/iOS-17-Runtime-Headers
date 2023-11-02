
@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo {
    struct { 
        unsigned short timeStamp; 
        unsigned short bandwithEstimation; 
        unsigned short videoBurstLoss; 
        unsigned short videoReceviedPkts; 
        unsigned short audioBurstLoss; 
        unsigned short audioReceviedPkts; 
        unsigned int totalReceviedKbits; 
        unsigned int receiveQueueTarget; 
        unsigned int queuingDelay; 
        unsigned short sendTimestamp; 
        unsigned int owrd; 
        unsigned int connectionStatsBuffer; 
        unsigned short ecnECT1Count; 
        unsigned short ecnCECount; 
    }  _controlFeedbackParameter;
    double  _controlInfoArrivalTime;
    unsigned int  _controlInfoAudioPacketSize;
    unsigned int  _controlInfoAudioTimestamp;
    unsigned char  _controlInfoECNByte;
    bool  _controlInfoIsDuplicatePacket;
    bool  _controlInfoIsReceivedOnPrimary;
    unsigned int  _controlInfoReceivedKbits;
    unsigned int  _controlInfoReceivedPackets;
    unsigned short  _controlInfoSequenceNumber;
    bool  _ecnEnabled;
    bool  _videoEnabled;
}

@property bool ecnEnabled;
@property (readonly) unsigned long long feedbackSize;
@property bool videoEnabled;

- (int)configureWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg3;
- (id)description;
- (bool)ecnEnabled;
- (unsigned long long)feedbackSize;
- (int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned int)arg4;
- (int)getInfoUnserialized:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned int x11; unsigned int x12; unsigned short x13; unsigned short x14; }*)arg1 type:(unsigned int)arg2;
- (int)handleOptionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg1;
- (bool)hasInfoType:(unsigned int)arg1;
- (id)init;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned long long)arg2 optionalControlInfo:(struct { double x1; int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; bool x9; bool x10; unsigned char x11; }*)arg3 version:(unsigned char)arg4;
- (int)serializeToBuffer:(char *)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3;
- (unsigned long long)serializedSize;
- (void)setEcnEnabled:(bool)arg1;
- (int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned int)arg3;
- (int)setInfoUnserialized:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned short x10; unsigned int x11; unsigned int x12; unsigned short x13; unsigned short x14; }*)arg1 type:(unsigned int)arg2;
- (void)setVideoEnabled:(bool)arg1;
- (bool)videoEnabled;

@end
