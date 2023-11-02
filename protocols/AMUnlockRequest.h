
@protocol AMUnlockRequest <NSObject>

@required

- (NSString *)name;
- (void)setName:(NSString *)arg1;
- (void)setUnlockDestination:(NSString *)arg1;
- (NSString *)unlockDestination;

@end
