
@protocol TMLModule <NSObject>

@required

+ (bool)loadModule;

@optional

+ (void)initializeJSContext:(JSValue *)arg1;

@end
