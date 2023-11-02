
@interface MSVStreamReader : NSObject <NSStreamDelegate> {
    bool  _closeOnStop;
    bool  _compress;
    id /* block */  _didEncounterErrorBlock;
    id /* block */  _didFinishReadingBlock;
    id /* block */  _didReadDataBlock;
    unsigned long long  _maximumBufferSize;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _stopped;
    NSInputStream * _stream;
    double  _timestamp;
    struct z_stream_s { char *x1; unsigned int x2; unsigned long long x3; char *x4; unsigned int x5; unsigned long long x6; char *x7; struct internal_state {} *x8; int (*x9)(); int (*x10)(); void *x11; int x12; unsigned long long x13; unsigned long long x14; } * _zstreamp;
}

@property (getter=shouldCompress, nonatomic) bool compress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didEncounterErrorBlock;
@property (nonatomic, copy) id /* block */ didFinishReadingBlock;
@property (nonatomic, copy) id /* block */ didReadDataBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumBufferSize;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSInputStream *stream;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (id)_compressedDataForData:(id)arg1;
- (bool)_shouldHandleEvent;
- (void)_stop;
- (void)dealloc;
- (id /* block */)didEncounterErrorBlock;
- (id /* block */)didFinishReadingBlock;
- (id /* block */)didReadDataBlock;
- (id)initWithInputStream:(id)arg1 queue:(id)arg2;
- (unsigned long long)maximumBufferSize;
- (id)queue;
- (void)readAllDataIntoFileHandle:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)readAllDataWithCompletion:(id /* block */)arg1;
- (id)readAllDataWithError:(id*)arg1;
- (void)setCompress:(bool)arg1;
- (void)setDidEncounterErrorBlock:(id /* block */)arg1;
- (void)setDidFinishReadingBlock:(id /* block */)arg1;
- (void)setDidReadDataBlock:(id /* block */)arg1;
- (void)setMaximumBufferSize:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setStream:(id)arg1;
- (bool)shouldCompress;
- (void)start;
- (void)stop;
- (void)stopWithCompletion:(id /* block */)arg1;
- (id)stream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (double)timestamp;

@end