
@interface OZFxPlugHostPropertiesAPI : NSObject <FxHostPropertiesAPI, PROAPIObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)releaseSharedHostPropertiesAPI;
+ (id)sharedHostPropertiesAPI;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)hostProperties;

@end
