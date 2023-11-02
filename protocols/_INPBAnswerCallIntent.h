
@protocol _INPBAnswerCallIntent <NSObject>

@required

- (int)StringAsAudioRoute:(NSString *)arg1;
- (int)audioRoute;
- (NSString *)audioRouteAsString:(int)arg1;
- (NSString *)callIdentifier;
- (bool)hasAudioRoute;
- (bool)hasCallIdentifier;
- (bool)hasIntentMetadata;
- (_INPBIntentMetadata *)intentMetadata;
- (void)setAudioRoute:(int)arg1;
- (void)setCallIdentifier:(NSString *)arg1;
- (void)setHasAudioRoute:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;

@end
