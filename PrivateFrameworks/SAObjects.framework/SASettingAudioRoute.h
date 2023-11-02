
@interface SASettingAudioRoute : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *audioRouteType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)audioRoute;
+ (id)audioRouteWithDictionary:(id)arg1 context:(id)arg2;

- (id)audioRouteType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAudioRouteType:(id)arg1;

@end
