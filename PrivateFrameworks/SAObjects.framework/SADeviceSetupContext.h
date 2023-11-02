
@interface SADeviceSetupContext : SADomainObject

@property (nonatomic, copy) NSString *setupSceneId;

+ (id)setupContext;
+ (id)setupContextWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSetupSceneId:(id)arg1;
- (id)setupSceneId;

@end
