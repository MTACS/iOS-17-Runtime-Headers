
@interface SASettingGetPlaybackAudioRoute : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *audioCategory;

+ (id)getPlaybackAudioRoute;
+ (id)getPlaybackAudioRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioCategory;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAudioCategory:(id)arg1;

@end
