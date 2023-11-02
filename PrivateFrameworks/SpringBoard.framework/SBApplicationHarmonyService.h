
@interface SBApplicationHarmonyService : NSObject <SBApplicationServerHarmonyDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)applicationServer:(id)arg1 client:(id)arg2 fetchWhitePointAdaptivityStyleForDisplayId:(unsigned int)arg3 withCompletion:(id /* block */)arg4;
- (id)init;

@end
