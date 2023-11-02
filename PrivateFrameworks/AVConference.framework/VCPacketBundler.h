
@interface VCPacketBundler : NSObject {
    unsigned int  _accessUnitDataSectionSize;
    struct tagAccessUnitHeaderInfo { 
        unsigned short accessUnitCount; 
        unsigned short accessUnitSize[3]; 
    }  _accessUnitHeaderInfo;
    bool  _allowLargePackets;
    char * _buffer;
    unsigned int  _bufferSize;
    unsigned int  _bundledPackets;
    int  _bundlingScheme;
    struct opaqueVCPacketBundlerCdrxBundleInfo { struct tagVCPacketBundlerPacketInfo { int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; bool x_1_1_5; } x1[2]; bool x2; struct tagVCAudioPacketBundlerCDRXStateParameters { struct tagVCAudioPacketBundlerCDRXInfo { unsigned char x_1_2_1; unsigned short x_1_2_2; } x_3_1_1[8]; unsigned char x_3_1_2; } x3; struct opaqueCMSimpleQueue {} *x4; } * _cdrxBundleInfoRef;
    bool  _currentBundleVoiceActivity;
    unsigned int  _encodedBufferSize;
    bool  _isFull;
    bool  _lastBundleVoiceActivity;
    unsigned int  _maxPacketSize;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _mutex;
    int  _numBufferedSamples;
    int  _operatingMode;
    int (* _packetHandler;
    void * _packetHandlerContext;
    unsigned int  _packetsPerBundle;
    int  _payload;
    unsigned char  _priority;
    bool  _shouldSendPacket;
    unsigned int  _timestamp;
}

@property (nonatomic) bool allowLargePackets;
@property (nonatomic, readonly) unsigned int bundledPackets;
@property (nonatomic) int bundlingScheme;
@property (nonatomic, readonly) char *encodedBuffer;
@property (nonatomic, readonly) unsigned int encodedBufferSize;
@property (nonatomic, readonly) bool isFull;
@property (nonatomic, readonly) bool isTalkSpurtStart;
@property (nonatomic) unsigned int maxPacketSize;
@property (nonatomic, readonly) unsigned int packetsPerBundle;
@property (nonatomic) int payload;
@property (nonatomic, readonly) unsigned char priority;
@property (nonatomic) unsigned int timestamp;

- (bool)_copyInputBytes:(void*)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (char *)accessUnitDataSectionHead;
- (unsigned int)accessUnitHeaderSectionSize;
- (unsigned int)accessUnitHeaderSectionSizeMaximum;
- (bool)allocateBundleBuffer:(unsigned int)arg1;
- (bool)allowLargePackets;
- (bool)bundleAudioLegacy:(void*)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (bool)bundleAudioRFC3640:(void*)arg1 numInputBytes:(unsigned int)arg2 payloadType:(int)arg3 timestamp:(unsigned int)arg4;
- (unsigned int)bundleBufferSizeWidthMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;
- (unsigned int)bundledPackets;
- (int)bundlingScheme;
- (void)dealloc;
- (char *)encodedBuffer;
- (char *)encodedBufferForRFC3640;
- (unsigned int)encodedBufferSize;
- (unsigned int)encodedBufferSizeForRFC3640;
- (void)initLock;
- (id)initWithOperatingMode:(int)arg1 bundlingScheme:(int)arg2 packetHandler:(int (*)arg3 packetHandlerContext:(void*)arg4;
- (bool)isFull;
- (bool)isTalkSpurtStart;
- (void)lock;
- (unsigned int)maxPacketSize;
- (unsigned int)packetsPerBundle;
- (int)payload;
- (unsigned char)priority;
- (bool)reallocateBufferWithMaxPacketSize:(unsigned int)arg1 maxPacketCount:(unsigned int)arg2;
- (void)resetBuffer;
- (void)setAllowLargePackets:(bool)arg1;
- (void)setBundlingScheme:(int)arg1;
- (void)setMaxPacketSize:(unsigned int)arg1;
- (bool)setPacketsPerBundle:(unsigned int)arg1;
- (void)setPayload:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned int)timestamp;
- (void)unlock;

@end
