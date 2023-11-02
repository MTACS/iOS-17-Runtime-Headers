
@protocol DEDDeviceFBKSupport

@required

+ (NSArray *)FBKKnownDevices;

- (NSString *)displayName;
- (NSString *)displayType;
- (bool)isFBKPaired;
- (bool)isVisibleToDED;
- (void)pairToFBK;
- (void)removeFBKPairing;
- (void)updateStoredCopyIfNeeded;

@end
