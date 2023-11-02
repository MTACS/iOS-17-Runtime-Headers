
@protocol AFLocationSnapshotMutating <NSObject>

@required

- (void)setAccessState:(long long)arg1;
- (void)setAltitude:(NSNumber *)arg1;
- (void)setDirection:(NSNumber *)arg1;
- (void)setHorizontalAccuracy:(NSNumber *)arg1;
- (void)setLatitude:(NSNumber *)arg1;
- (void)setLongitude:(NSNumber *)arg1;
- (void)setPreciseLocationEnabled:(bool)arg1;
- (void)setSpeed:(NSNumber *)arg1;
- (void)setVerticalAccuracy:(NSNumber *)arg1;

@end
