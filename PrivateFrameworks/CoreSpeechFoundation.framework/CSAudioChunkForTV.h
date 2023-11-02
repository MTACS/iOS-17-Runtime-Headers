
@interface CSAudioChunkForTV : NSObject {
    unsigned int  _audioFormat;
    float  _avgPower;
    unsigned int  _numChannels;
    NSArray * _packets;
    float  _peakPower;
    unsigned long long  _streamHandleID;
    unsigned long long  _timeStamp;
}

@property (nonatomic) unsigned int audioFormat;
@property (nonatomic) float avgPower;
@property (nonatomic) unsigned int numChannels;
@property (nonatomic, retain) NSArray *packets;
@property (nonatomic) float peakPower;
@property (nonatomic) unsigned long long streamHandleID;
@property (nonatomic) unsigned long long timeStamp;

- (void).cxx_destruct;
- (unsigned int)audioFormat;
- (float)avgPower;
- (id)initWithXPCObject:(id)arg1;
- (unsigned int)numChannels;
- (id)packets;
- (float)peakPower;
- (void)setAudioFormat:(unsigned int)arg1;
- (void)setAvgPower:(float)arg1;
- (void)setNumChannels:(unsigned int)arg1;
- (void)setPackets:(id)arg1;
- (void)setPeakPower:(float)arg1;
- (void)setStreamHandleID:(unsigned long long)arg1;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)streamHandleID;
- (unsigned long long)timeStamp;
- (id)xpcObject;

@end
