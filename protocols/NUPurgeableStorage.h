
@protocol NUPurgeableStorage <NUImageStorage, NUSharableImage>

@required

- (void)adjustPurgeLevel:(long long)arg1;
- (bool)isPurgeable;
- (bool)isPurged;
- (bool)makeNonPurgeable;
- (void)makePurgeable;
- (long long)purgeLevel;

@end
