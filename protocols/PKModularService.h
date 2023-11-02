
@protocol PKModularService <NSObject>

@optional

+ (<PKModularService> *)initForPlugInKit;
+ (<PKModularService> *)initForPlugInKitWithOptions:(NSDictionary *)arg1;

- (void)beginUsing:(id <PKSubsystemServicePersonality>)arg1 withBundle:(NSBundle *)arg2;
- (void)communicationsFailed:(id <PKSubsystemServicePersonality>)arg1;
- (void)endUsing:(id <PKSubsystemServicePersonality>)arg1;

@end
