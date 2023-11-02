
@protocol RCSAudioFile <NSObject>

@required

- (AVAudioFormat *)fileFormat;
- (AVAudioFormat *)processingFormat;
- (NSDictionary *)settings;
- (NSURL *)url;

@end
