
@protocol MOVStreamWriterDeprecated <NSObject>

@required

- (void)addTrackForStreamWithIdentifier:(NSString *)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 encoderConfig:(NSDictionary *)arg3;
- (void)prepareToRecord;
- (bool)setVideoTransformFromOrientation:(int)arg1;

@end
