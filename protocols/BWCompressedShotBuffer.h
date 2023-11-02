
@protocol BWCompressedShotBuffer <NSObject>

@required

- (void)flushAndWaitForUncompressedEquivalentFreeBufferCount:(int)arg1;
- (void)setUncompressedEquivalentCapacity:(int)arg1;
- (int)uncompressedEquivalentCapacity;

@end
