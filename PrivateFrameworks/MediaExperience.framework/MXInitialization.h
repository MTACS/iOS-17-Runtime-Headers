
@interface MXInitialization : NSObject

+ (void)initialize;
+ (void)notifyMXIsFullyInitialized;
+ (void)waitUntilMXIsFullyInitialized;

@end
