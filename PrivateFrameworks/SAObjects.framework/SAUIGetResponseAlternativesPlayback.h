
@interface SAUIGetResponseAlternativesPlayback : SABaseClientBoundCommand

@property (nonatomic, retain) SAUIGetResponseAlternatives *playbackCommand;

+ (id)getResponseAlternativesPlayback;
+ (id)getResponseAlternativesPlaybackWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)playbackCommand;
- (bool)requiresResponse;
- (void)setPlaybackCommand:(id)arg1;

@end
