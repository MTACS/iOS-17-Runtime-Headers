
@interface RCAssetWriter : AVAssetWriter {
    NSError * _appendError;
    NSObject<OS_dispatch_group> * _bufferGroup;
    NSObject<OS_dispatch_queue> * _bufferQueue;
    NSMutableArray * _buffers;
    AVAudioFormat * _fileFormat;
    id  _formatDescription;
    long long  _frameCount;
    AVAssetWriterInput * _input;
    AVAudioFormat * _processingFormat;
    int  _sampleRate;
    NSDictionary * _settings;
    NSURL * _url;
}

@property (nonatomic, readonly) AVAudioFormat *fileFormat;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) AVAudioFormat *processingFormat;
@property (nonatomic, readonly) NSDictionary *settings;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (bool)_appendBufferOnQueue:(id)arg1 error:(id*)arg2;
- (id)fileFormat;
- (void)finishWritingAudioFile:(id /* block */)arg1;
- (long long)frameCount;
- (id)initForWriting:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (id)processingFormat;
- (id)settings;
- (bool)startWritingAudioFile:(id*)arg1;
- (id)url;
- (bool)writeFromBuffer:(id)arg1 error:(id*)arg2;

@end
