
@interface OspreyGRPCStreamingContext : NSObject <OspreyClientStreamingContext> {
    bool  _closed;
    id /* block */  _completion;
    bool  _compressionEnabled;
    NSInputStream * _inputStream;
    OspreyMessageReader * _messageReader;
    OspreyMessageWriter * _messageWriter;
    OspreyBufferedOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=isCompressionEnabled, nonatomic) bool compressionEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_writeFrame:(id)arg1 compressed:(bool)arg2 error:(id*)arg3;
- (void)bindToUrlRequest:(id)arg1;
- (void)completeWithError:(id)arg1;
- (void)finishWriting;
- (void)handleResponseData:(id)arg1;
- (id)initWithQueue:(id)arg1 responseHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)isCompressionEnabled;
- (void)setCompressionEnabled:(bool)arg1;
- (void)writeFrame:(id)arg1;
- (void)writeFrame:(id)arg1 compressed:(bool)arg2;

@end
