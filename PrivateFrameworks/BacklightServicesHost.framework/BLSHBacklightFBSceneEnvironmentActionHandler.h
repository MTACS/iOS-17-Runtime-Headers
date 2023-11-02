
@interface BLSHBacklightFBSceneEnvironmentActionHandler : NSObject <BLSSceneActionHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)respondToActions:(id)arg1 forFBScene:(id)arg2;

@end
