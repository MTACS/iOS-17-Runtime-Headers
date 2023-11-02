
@interface CSAudioProcessWaitingBuffer : NSObject {
    NSMutableArray * _buffer;
    unsigned long long  _bufferedSampleCount;
    unsigned long long  _maxWaitingBufferSizeInSampleCount;
    NSString * _uuid;
}

@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic) unsigned long long bufferedSampleCount;
@property (nonatomic) unsigned long long maxWaitingBufferSizeInSampleCount;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (void)addAudioChunk:(id)arg1;
- (void)addAudioChunk:(id)arg1 withBufferedTimestamp:(id)arg2;
- (id)buffer;
- (unsigned long long)bufferedSampleCount;
- (void)dealloc;
- (id)fetchAudioChunksFromBuffer;
- (id)initWithUUID:(id)arg1 waitingBufferMaxLengthInSec:(float)arg2;
- (unsigned long long)maxWaitingBufferSizeInSampleCount;
- (void)setBuffer:(id)arg1;
- (void)setBufferedSampleCount:(unsigned long long)arg1;
- (void)setMaxWaitingBufferSizeInSampleCount:(unsigned long long)arg1;
- (id)uuid;

@end
