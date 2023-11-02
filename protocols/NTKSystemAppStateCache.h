
@protocol NTKSystemAppStateCache <NSObject>

@required

- (bool)isRemovedSystemApp:(NSString *)arg1;
- (bool)isRestrictedSystemApp:(NSString *)arg1;

@end
