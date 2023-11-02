
@interface SKArcadeService : NSObject

+ (void)arcadeSubscriptionStatusWithNonce:(unsigned long long)arg1 resultHandler:(id /* block */)arg2;
+ (void)registerArcadeAppWithRandomFromLib:(id)arg1 randomFromLibLength:(unsigned int)arg2 resultHandler:(id /* block */)arg3;
+ (void)repairArcadeApp;

@end
