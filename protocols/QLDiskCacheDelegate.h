
@protocol QLDiskCacheDelegate

@required

- (void)databaseCorruptionDetected;
- (void)startWriting;
- (void)stopWriting;

@end
