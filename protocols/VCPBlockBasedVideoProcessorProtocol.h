
@protocol VCPBlockBasedVideoProcessorProtocol

@required

- (bool)addFrameProcessingRequest:(void *)arg1 withConfiguration:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct opaqueCMSampleBuffer { }*, bool*, void*, NSDictionary *, id*
- (bool)analyzeWithError:(id*)arg1;
- (void)cancel;
- (NSDictionary *)decoderSettings;
- (id)initWithURL:(NSURL *)arg1;
- (id /* block */)progressHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, double, void*, id, SEL
- (void)setDecoderSettings:(NSDictionary *)arg1;
- (void)setProgressHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*

@end
