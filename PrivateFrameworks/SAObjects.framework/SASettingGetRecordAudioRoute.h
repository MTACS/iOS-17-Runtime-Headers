
@interface SASettingGetRecordAudioRoute : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *audioCategory;

+ (id)getRecordAudioRoute;
+ (id)getRecordAudioRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioCategory;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAudioCategory:(id)arg1;

@end
