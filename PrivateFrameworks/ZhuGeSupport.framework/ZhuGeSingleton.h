
@interface ZhuGeSingleton : NSObject

+ (bool)accessInstanceVariablesDirectly;
+ (id)sharedInstance;

- (void)initData;

@end
