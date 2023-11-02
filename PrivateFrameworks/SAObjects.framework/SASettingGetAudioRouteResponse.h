
@interface SASettingGetAudioRouteResponse : SASettingResponse

@property (nonatomic, retain) SASettingAudioRoute *audioRoute;

+ (id)getAudioRouteResponse;
+ (id)getAudioRouteResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioRoute;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAudioRoute:(id)arg1;

@end
