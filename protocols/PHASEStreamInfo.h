
@protocol PHASEStreamInfo

@required

- (AVAudioFormat *)format;
- (unsigned int)latencyInFrames;

@optional

- (NSDictionary *)streamDescription;

@end
