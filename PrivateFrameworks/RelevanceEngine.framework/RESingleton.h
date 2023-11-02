
@interface RESingleton : NSObject

+ (id)_classKey;
+ (void)_decrementSingletonCache;
+ (void)_incrementSingletonCache;
+ (id)sharedInstance;

- (id)_init;

@end
