
@interface SBLegacyServices : NSObject

+ (void)_configure;
+ (void)checkInPorts;
+ (void)setFunction:(void*)arg1 forSymbol:(const char *)arg2;
+ (void)start;
+ (id)workloop;

@end
