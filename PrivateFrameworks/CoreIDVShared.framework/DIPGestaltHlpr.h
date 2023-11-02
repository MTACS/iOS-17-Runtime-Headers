
@interface DIPGestaltHlpr : NSObject <DIPGestaltHlprProtocol>

+ (id)getSharedInstance;

- (id)copyAnswer:(struct __CFString { }*)arg1;
- (bool)hasPKASupport;
- (bool)isFaceIDDevice;
- (bool)isIPad;
- (long long)sikaVersion;

@end
