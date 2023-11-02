
@interface BPSZipMany : BPSPublisher {
    NSMutableArray * _buffer;
    unsigned long long  _bufferResultCount;
    unsigned long long  _currentPublisher;
    NSArray * _publishers;
}

@property (nonatomic, retain) NSMutableArray *buffer;
@property (nonatomic) unsigned long long bufferResultCount;
@property (nonatomic) unsigned long long currentPublisher;
@property (nonatomic, readonly) NSArray *publishers;

+ (id)new;

- (void).cxx_destruct;
- (void)_resetBuffer;
- (id)_tryConstructResultArray;
- (id)buffer;
- (unsigned long long)bufferResultCount;
- (bool)completed;
- (unsigned long long)currentPublisher;
- (id)init;
- (id)initWithPublishers:(id)arg1;
- (id)nextEvent;
- (id)publishers;
- (void)reset;
- (void)setBuffer:(id)arg1;
- (void)setBufferResultCount:(unsigned long long)arg1;
- (void)setCurrentPublisher:(unsigned long long)arg1;
- (void)subscribe:(id)arg1;
- (id)upstreamPublishers;

@end
