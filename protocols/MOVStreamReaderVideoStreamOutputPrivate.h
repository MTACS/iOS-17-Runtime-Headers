
@protocol MOVStreamReaderVideoStreamOutputPrivate <NSObject>

@required

- (NSDictionary *)customTrackMetadata;
- (NSDictionary *)nextAttachmentWithError:(id*)arg1;
- (<MOVStreamPostProcessor> *)postProcessor;
- (void)setPostProcessor:(id <MOVStreamPostProcessor>)arg1;

@end
