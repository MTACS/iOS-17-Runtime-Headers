
@protocol VCMediaRecorderTransportDelegate <NSObject>

@required

- (void)mediaRecorder:(VCMediaRecorder *)arg1 shouldProcessRequest:(NSDictionary *)arg2 recipientID:(NSString *)arg3;

@end
