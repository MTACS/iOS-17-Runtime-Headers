
@interface ODIGestaltHlpr : NSObject

+ (id)getSharedInstance;

- (id)copyAnswer:(struct __CFString { }*)arg1;
- (bool)hasPKASupport;
- (long long)sikaVersion;

@end
