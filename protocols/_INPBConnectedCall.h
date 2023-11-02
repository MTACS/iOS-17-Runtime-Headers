
@protocol _INPBConnectedCall <NSObject>

@required

- (int)StringAsAudioRoute:(NSString *)arg1;
- (int)audioRoute;
- (NSString *)audioRouteAsString:(int)arg1;
- (bool)hasAudioRoute;
- (void)setAudioRoute:(int)arg1;
- (void)setHasAudioRoute:(bool)arg1;

@end
