
@protocol _INPBPlayMediaIntentResponse <NSObject>

@required

- (bool)hasNowPlayingInfo;
- (_INPBDictionary *)nowPlayingInfo;
- (void)setNowPlayingInfo:(_INPBDictionary *)arg1;

@end
