
@interface DTAssertionManager : NSObject {
    NSArray * _assertionFactories;
    NSArray * _disableKeys;
    NSObject<OS_dispatch_queue> * _guard;
    NSMutableDictionary * _pidInfosByPid;
}

+ (void)defaultAssertionFactories:(id*)arg1 andDisableKeys:(id*)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAssertionFactories:(id)arg1 andDisableKeys:(id)arg2;
- (void)removeAssertionsForPid:(int)arg1 onBehalfOfClient:(id)arg2;
- (void)removeClaimsHeldByClient:(id)arg1;
- (void)takeAssertionsForPid:(int)arg1 onBehalfOfClient:(id)arg2 withOptions:(id)arg3;

@end
