
@protocol MTLDebugResourcePurgeable

@required

- (NSString *)label;
- (void)lockPurgeableState;
- (bool)purgeableStateValidForRendering;
- (void)unlockPurgeableState;

@end
