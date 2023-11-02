
@interface VCAudioRedBuilder : NSObject {
    bool  _includeSequenceOffset;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
        unsigned char priority; 
    }  _latestPrimaryPayload;
    unsigned int  _maxDelay;
    unsigned int  _maxREDPayloadSize;
    unsigned int  _numPayloads;
    char * _payloadBufferHistory;
    int  _payloadBufferHistoryIndex;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
        unsigned char priority; 
    }  _payloadHistory;
    unsigned int  _payloadHistoryCount;
    unsigned char  _redPayloadBufferToSend;
    struct tagVCAudioRedPayload { 
        int payloadType; 
        char *buffer; 
        int bufferLength; 
        unsigned int timestamp; 
        bool isRedAudio; 
        unsigned char redCount; 
        unsigned char sequenceOffset; 
        unsigned char priority; 
    }  _redPayloadToSend;
    int  _redPayloadType;
    unsigned int  _sampleRate;
    unsigned int  _samplesPerFrame;
    NSPointerArray * _selectedRedPayloads;
}

@property (nonatomic) unsigned int maxDelay;
@property (nonatomic) unsigned int maxREDPayloadSize;
@property (nonatomic) unsigned int numPayloads;
@property (nonatomic, readonly) int redPayloadType;

+ (unsigned int)redOverheadForNumPayloads:(unsigned int)arg1;

- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)buildRedPayloadWithPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1 redPayloads:(id)arg2;
- (void)dealloc;
- (id)initWithRedPayloadType:(int)arg1 sampleRate:(unsigned int)arg2 samplesPerFrame:(unsigned int)arg3 numPayloads:(unsigned int)arg4 maxDelay:(unsigned int)arg5 includeSequenceOffset:(bool)arg6;
- (bool)isPayloadTimestampWithinThreshold:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1 forTimestamp:(unsigned int)arg2;
- (unsigned int)maxDelay;
- (unsigned int)maxREDPayloadSize;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)nearestRedPayloadForTimestamp:(unsigned int)arg1;
- (unsigned int)numPayloads;
- (id)payloadHistoryDescription;
- (id)redPayloadDescription:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1;
- (struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)redPayloadForPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1;
- (int)redPayloadType;
- (bool)redundantPayloads:(id)arg1 containsPointer:(void*)arg2;
- (id)redundantPayloadsDescription:(id)arg1;
- (char *)resetOutputPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1;
- (void)resetPayloadHistory;
- (id)selectRedPayloadsForPrimaryPayload:(struct tagVCAudioRedPayload { int x1; char *x2; int x3; unsigned int x4; bool x5; unsigned char x6; unsigned char x7; unsigned char x8; }*)arg1;
- (void)setMaxDelay:(unsigned int)arg1;
- (void)setMaxREDPayloadSize:(unsigned int)arg1;
- (void)setNumPayloads:(unsigned int)arg1;

@end
